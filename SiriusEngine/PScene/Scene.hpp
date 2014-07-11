#ifndef SCENE_H
#define SCENE_H


#include "../stdafx.hpp"
#include "../predef.hpp"


namespace sir{
namespace PScene{

class Scene
{
    public:
        /** Default constructor */
        Scene();
        /** Default destructor */
        virtual ~Scene();

        /**
        * Draw the scene
        */
        void draw();

        /**
        * Calcul the scene
        */
        void update();

        /**
        * Add an element to the scene
        */
        void add(sir::PCore::Element* element);




        void setEngine(PCore::Engine * _engine){engine =  _engine;}
        PCore::Engine * getEngine() {return engine;}

    private:

        PCore::Engine * engine;
        std::vector<sir::PCore::Element*>* elements;
};

}
}

#include "../PCore/Engine.hpp"
#include "../PCore/Element.hpp"

#endif // SCENE_H
