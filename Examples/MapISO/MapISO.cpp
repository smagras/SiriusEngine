#include "MapISO.hpp"

namespace Examples{

void MapISO::start()
{
    //sir::PCore::Engine * myApp = new sir::PCore::Engine();
    this->init(800,600,"Hello world");

    this->getImageManager()->load("Examples/Resources/Images/terrain.png");
    this->getImageManager()->load("Examples/Resources/Images/character.bmp",255,0,255);




    game = new sir::PGame::Game();
    game->setSize(sir::PSystem::Vector2F(800,500));
    game->setCameraPosition(sir::PSystem::Vector2F(200,-200));
    this->add(game);


    sir::PGame::ISOMap * isomap = new sir::PGame::ISOMap();
    isomap->use(this->getImageManager()->get("Examples/Resources/Images/terrain.png"));

    game->add(isomap);





    sir::PScene::Scene * scene01 = new sir::PScene::Scene();
    scene01->setSize(sir::PSystem::Vector2F(100,100));
    this->add(scene01);

    sir::PScene::Sprite * sprite01 = new sir::PScene::Sprite();
    sprite01->use(this->getImageManager()->get("Examples/Resources/Images/character.bmp"));
    sprite01->init(sir::PSystem::RectangleI(0,0,32,32),5,200);
    sprite01->play();

    sprite01->setSize(sir::PSystem::Vector2F(40,40));
    scene01->add(sprite01);



    this->getEventManager()->bindRightClick(sprite01, SIRCallback {
        sir::PScene::Sprite * sprite = (sir::PScene::Sprite *)e;
        MapISO* eng = (MapISO*)sprite->getScene()->getEngine();
        eng->game->setCameraPosition(sir::PSystem::Vector2F(200,eng->game->getCameraPosition().y+100));
        cout<<"ok"<<endl;
    });



    this->run();

}

}
