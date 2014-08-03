#include "MapISO.hpp"

namespace Examples{

void MapISO::start()
{
    //sir::PCore::Engine * myApp = new sir::PCore::Engine();
    this->init(800,600,"Hello world");

    this->getImageManager()->load("Examples/Resources/Images/terrain.png");



    // Création de la game
    game = new sir::PGame::Game();
    game->setSize(sir::PSystem::Vector2F(800,500));
    game->setCameraPosition(sir::PSystem::Vector2F(200,-200));
    this->add(game);


    sir::PGame::ISOMap * isomap = new sir::PGame::ISOMap();
    isomap->use(this->getImageManager()->get("Examples/Resources/Images/terrain.png"));

    game->add(isomap);


    // Events

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Left, SIRCallback {
        MapISO* eng = (MapISO*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x-50,eng->game->getCameraPosition().y));
    });

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Right, SIRCallback {
        MapISO* eng = (MapISO*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x+50,eng->game->getCameraPosition().y));
    });

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Up, SIRCallback {
        MapISO* eng = (MapISO*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x,eng->game->getCameraPosition().y-50));
    });

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Down, SIRCallback {
        MapISO* eng = (MapISO*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x,eng->game->getCameraPosition().y+50));
    });

    this->run();

}

}
