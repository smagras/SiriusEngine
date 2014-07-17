#include "EventManager.hpp"


namespace sir{
namespace PEvent{


EventManager::EventManager(){

    eventsCliked = new std::vector<Event>();
}

void EventManager::bindClick(sir::PCore::Element* _elementCliked,void (*callback)(sir::PCore::Element*)){

    //if (_elementCliked != NULL){
        //void * f = callback(_elementCliked);
        sir::PEvent::Event event;
        event.element = _elementCliked;
        event.callback = callback;
        eventsCliked->push_back(event);


    //}

}

void EventManager::update(){
    sf::Event event;
    while (this->getEngine()->getRender()->pollEvent(event))
    {
        if (event.type == sf::Event::Closed){
            this->getEngine()->getRender()->close();
        }

        if (event.mouseButton.button == sf::Mouse::Right){

            for (unsigned i=0; i< eventsCliked->size(); i++)
            {
                eventsCliked->at(i).callback(eventsCliked->at(0).element);
            }

        }

    }
}



}
}
