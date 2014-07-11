#include "HelloWorld.hpp"

namespace Examples{

void HelloWorld::run()
{
    sir::PCore::Engine * myApp = new sir::PCore::Engine();
    myApp->init(800,600,"Hello world");

    sir::PCore::ImageManager * imageManager = new sir::PCore::ImageManager();
    imageManager->load("Examples/Resources/Images/house.bmp",255,0,255);

    sir::PScene::Scene * scene01 = new sir::PScene::Scene();

    sir::PCore::Image * image01 = new sir::PCore::Image();
    image01->use(imageManager->get("Examples/Resources/Images/house.bmp"));

    myApp->add(scene01);
    scene01->add(image01);

    myApp->run();

}

}
