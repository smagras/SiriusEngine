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

    cout << "+------------------------------------------------------------------------+" << endl;
    cout << "+ Sirius Engine                                                          +" << endl;
    cout << "+ Version "<<CONST_VERSION<<"                                                          +" << endl;
    cout << "+------------------------------------------------------------------------+" << endl;
}

Engine::~Engine() {
}

void Engine::init(int width,int height,string title){

    render = new sf::RenderWindow(sf::VideoMode(width, height), title);
}

void Engine::run(){


    while (render->isOpen())
    {
        sf::Event event;
        while (render->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                render->close();
        }


        render->clear(sf::Color::Black);


        for (unsigned i=0; i< scenes->size(); i++)
        {
            //scenes->at(i)->update();
            scenes->at(i)->draw();
        }

        render->display();
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

