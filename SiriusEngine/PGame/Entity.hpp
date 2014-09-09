#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "../stdafx.hpp"
#include "../predef.hpp"
#include "../PGame/GameElement.hpp"


namespace sir{
namespace PGame{

class Entity : public sir::PGame::GameElement
{
    public:
        /** Default constructor */
        Entity();
        /** Default destructor */
        virtual ~Entity();

        void setScene(PScene::Scene * _scene);


        void use(sf::Texture * _texture);
        void draw();
        void update();

        void addAnimation(sir::PGame::EntityAnimation animation);
        void playAnimation(string name);

    private:
        sir::PScene::Sprite * sprite;
        std::map<std::string, sir::PGame::EntityAnimation > *animations;

};

}
}

#include "../PGame/Game.hpp"
#include "../PGame/EntityAnimation.hpp"
#include "../PScene/Sprite.hpp"

#endif // ENTITY_HPP
