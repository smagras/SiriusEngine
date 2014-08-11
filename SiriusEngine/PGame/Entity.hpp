#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "../stdafx.hpp"
#include "../predef.hpp"
#include "../PGame/GameElement.hpp"
#include "../PScene/Sprite.hpp"

namespace sir{
namespace PGame{

class Entity : public sir::PGame::GameElement
{
    public:
        /** Default constructor */
        Entity();
        /** Default destructor */
        virtual ~Entity();



        void draw();
        void update();

    private:
        sir::PScene::Sprite sprite;


};

}
}

#include "../PGame/Game.hpp"

#endif // ENTITY_HPP
