#include "HelloWorld.hpp"

namespace Examples{

void HelloWorld::run()
{
    sir::PCore::Engine * myApp = new sir::PCore::Engine();
    myApp->init(800,600,"Hello world");

    myApp->getImageManager()->load("Examples/Resources/Images/house.bmp",255,0,255);

    sir::PScene::Scene * scene01 = new sir::PScene::Scene();

    sir::PScene::Image * image01 = new sir::PScene::Image();
    image01->use(myApp->getImageManager()->get("Examples/Resources/Images/house.bmp"));
    image01->crop(100,100,100,30);

    myApp->add(scene01);
    scene01->add(image01);

    myApp->run();

}

}
