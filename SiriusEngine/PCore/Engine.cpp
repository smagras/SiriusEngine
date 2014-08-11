/*
 * File:   CEngine.cpp
 * Author: STEVE
 *
 * Created on 27 janvier 2014, 00:06
 */


#include "Engine.hpp"



namespace sir{
namespace PCore{

Engine::Engine() {
    scenes = new std::vector<sir::PScene::Scene*>();
    imageManager = new ImageManager();
    eventManager =  new sir::PEvent::EventManager();
    eventManager->setEngine(this);

    cout << "+------------------------------------------------------------------------+" << endl;
    cout << "+ SIRIUS ENGINE                                                          +" << endl;
    cout << "+ VERSION "<<CONST_VERSION<<"                                                            +" << endl;
    cout << "+ GITHUB: https://github.com/smagras/SiriusEngine                        +" << endl;
    cout << "+------------------------------------------------------------------------+" << endl<< endl;
}

Engine::~Engine() {
}

void Engine::init(int width,int height,string title){

    render = new sf::RenderWindow(sf::VideoMode(width, height), title);
    render->setFramerateLimit(60);
    clock.restart();
    lastUpdate = this->getElsapedTime();
    setUpdateTic(60);
}

void Engine::run(){


    while (render->isOpen())
    {
        clockFPS.restart();

        this->getEventManager()->update();


        render->clear(sf::Color::Black);
        // Update itch spedified timing
        bool needUpdate = false;
        if (lastUpdate.asMilliseconds()+ getUpdateTic() < this->getElsapedTime().asMilliseconds() ){
            needUpdate = true;
            lastUpdate = this->getElsapedTime();
        }
        // draw
        for (unsigned i=0; i< scenes->size(); i++)
        {
            if(needUpdate) scenes->at(i)->update();
            scenes->at(i)->draw();
            this->render->draw(*scenes->at(i)->spriteRender);
        }





        render->display();

        framerate =  1 / clockFPS.getElapsedTime().asSeconds() ;

        //cout << this->getFramerate() << endl;

    }


}


void Engine::add( PScene::Scene* scene ){

    if (scene != NULL){
        scene->setEngine(this);
        scenes->push_back(scene);

    }

}

} //PCore
} //sir

