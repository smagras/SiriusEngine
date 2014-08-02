#ifndef GAME_H
#define GAME_H

#include "../stdafx.hpp"
#include "../predef.hpp"

#include "../PScene/Scene.hpp"
#include "../PGame/GameElement.hpp"

namespace sir{
namespace PGame{

class Game : public sir::PScene::Scene
{
    public:
        /** Default constructor */
        Game();


        /**
        * Add a game element to the game
        */
        void add(sir::PGame::GameElement* element);

        sir::PSystem::Vector2F getCameraPosition() {return cameraPosition;}
        void setCameraPosition(sir::PSystem::Vector2F _cameraPosition);

        void updateGraphic();

        sf::View * getView() {return view;}


    private:

        sir::PSystem::Vector2F cameraPosition;
        sf::View * view;


};

}}

#endif // GAME_H
