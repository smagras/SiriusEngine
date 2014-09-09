#ifndef SCENE_H
#define SCENE_H


#include "../stdafx.hpp"
#include "../predef.hpp"


#include "Node.hpp"
#include "Graphic.hpp"


namespace sir{
namespace PScene{

class Scene : public sir::PCore::Graphic, public sir::PCore::Node
{
    friend class sir::PCore::Engine;

    public:
        /** Default constructor */
        Scene();
        /** Default destructor */
        virtual ~Scene();

        /**
        * Draw the scene
        */
        virtual void draw();

        /**
        * Calcul the scene
        */
        virtual void update();

        /**
        * Add an element to the scene
        */
        void add(sir::PCore::Element* element);
        void add(sir::PScene::Scene* scene);


        void updateGraphic();

        void setEngine(PCore::Engine * _engine){engine =  _engine;}
        PCore::Engine * getEngine() {return engine;}


        sf::RenderTexture * getRender() {return render;}

    protected:
         sf::Sprite * spriteRender;

    private:
        PCore::Engine * engine;
        sf::RenderTexture * render;
        std::vector<sir::PCore::Element*>* elements;
        std::vector<sir::PScene::Scene*>* scenes;



};

}
}

#include "../PCore/Engine.hpp"
#include "../PCore/Element.hpp"

#endif // SCENE_H
