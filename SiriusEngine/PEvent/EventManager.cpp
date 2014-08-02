#include "EventManager.hpp"


namespace sir{
namespace PEvent{


EventManager::EventManager(){

    eventsRightClick = new std::vector<Event>();
}

void EventManager::bindRightClick(sir::PCore::Element* _elementCliked,void (*callback)(sir::PCore::Element*)){

    if (_elementCliked != NULL){

        sir::PEvent::Event event;
        event.element = _elementCliked;
        event.callback = callback;
        eventsRightClick->push_back(event);
    }

}

void EventManager::update(){
    sf::Event event;
    while (this->getEngine()->getRender()->pollEvent(event))
    {
        if (event.type == sf::Event::Closed){
            this->getEngine()->getRender()->close();
        }

        if (event.type == sf::Event::MouseButtonReleased)
        {
            if (event.mouseButton.button == sf::Mouse::Right){

                for (unsigned i=0; i< eventsRightClick->size(); i++)
                {
                    sir::PCore::Element *elm = eventsRightClick->at(0).element;

                    if (event.mouseButton.x >= elm->getPosition().x &&
                        event.mouseButton.x <= elm->getPosition().x + elm->getSize().x &&
                        event.mouseButton.y >= elm->getPosition().y &&
                        event.mouseButton.y <= elm->getPosition().y + elm->getSize().y
                        ){
                            eventsRightClick->at(i).callback(eventsRightClick->at(0).element);
                    }

                }


            }
        }

    }
}



}
}
