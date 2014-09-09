#include "SimpleGame.hpp"

namespace Examples{

void SimpleGame::start()
{

    //sir::PCore::Engine * myApp = new sir::PCore::Engine();
    this->init(1024,768,"Hello world");

    this->getImageManager()->load("Examples/Resources/Images/terrain.png");
    this->getImageManager()->load("Examples/Resources/Images/character.bmp",255,0,255);



    // Création de la game
    game = new sir::PGame::Game();
    game->setSize(sir::PSystem::Vector2F(1024,600));
    game->setCameraPosition(sir::PSystem::Vector2F(200,-200));

    // Création de la map
    sir::PGame::ISOMap * isomap = new sir::PGame::ISOMap();
    isomap->use(this->getImageManager()->get("Examples/Resources/Images/terrain.png"));
    game->add(isomap);

    // Developper box
    sir::PPlugin::Standard::Dbox::DBox * debugbox = new  sir::PPlugin::Standard::Dbox::DBox();
    debugbox->setPosition(sir::PSystem::Vector2F(10,10));


    // Entity

    sir::PGame::Entity * entity01 = new sir::PGame::Entity();
    game->add(entity01);
    entity01->use(this->getImageManager()->get("Examples/Resources/Images/character.bmp"));
    entity01->addAnimation(sir::PGame::EntityAnimation("ani",sir::PSystem::RectangleI(0,32,32,32),5,200));
    entity01->playAnimation("ani");

    entity01->setPosition(sir::PSystem::Vector2F(100,100));
    entity01->setSize(sir::PSystem::Vector2F(40,40));



    // Création de la scene
    sir::PScene::Scene * gameScene = new sir::PScene::Scene();
    this->add(gameScene);
    gameScene->setSize(sir::PSystem::Vector2F(1024,600));
    gameScene->add(game);
    gameScene->add(debugbox);




    // Events

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Left, SIRCallback {
        SimpleGame* eng = (SimpleGame*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x-40,eng->game->getCameraPosition().y));
    });

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Right, SIRCallback {
        SimpleGame* eng = (SimpleGame*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x+40,eng->game->getCameraPosition().y));
    });

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Up, SIRCallback {
        SimpleGame* eng = (SimpleGame*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x,eng->game->getCameraPosition().y-40));
    });

    this->getEventManager()->bindKeyPress(this,sf::Keyboard::Down, SIRCallback {
        SimpleGame* eng = (SimpleGame*)e;
        eng->game->setCameraPosition(sir::PSystem::Vector2F(eng->game->getCameraPosition().x,eng->game->getCameraPosition().y+40));
    });

    this->run();

}

}
