#include "EventManager.hpp"


namespace sir{
namespace PEvent{


EventManager::EventManager(){

    eventsRightClick = new std::vector<Event>();
    eventsKeyPress = new std::vector<Event>();
}

void EventManager::bindRightClick(sir::PCore::Node* _elementCliked,void (*callback)(sir::PCore::Node*)){

    if (_elementCliked != NULL){

        sir::PEvent::Event event;
        event.element = _elementCliked;
        event.callback = callback;
        eventsRightClick->push_back(event);
    }

}

void EventManager::bindKeyPress(sir::PCore::Node* _elementKeyPressed,sf::Keyboard::Key _key,void (*callback)(sir::PCore::Node*)){

    if (_elementKeyPressed != NULL){

        sir::PEvent::Event event;
        event.element = _elementKeyPressed;
        event.callback = callback;
        event.key = _key;
        eventsKeyPress->push_back(event);
    }

}

void EventManager::update(){
    sf::Event event;
    while (this->getEngine()->getRender()->pollEvent(event))
    {
        if (event.type == sf::Event::Closed){
            this->getEngine()->getRender()->close();
        }



        if (event.type == sf::Event::KeyPressed)
        {

            for (unsigned i=0; i< eventsKeyPress->size(); i++)
            {
                if (sf::Keyboard::isKeyPressed(eventsKeyPress->at(i).key)){

                    eventsKeyPress->at(i).callback(eventsKeyPress->at(i).element);

                }
            }
        }



        if (event.type == sf::Event::MouseButtonReleased)
        {
            if (event.mouseButton.button == sf::Mouse::Right){

                for (unsigned i=0; i< eventsRightClick->size(); i++)
                {
                    sir::PCore::Element *elm = (sir::PCore::Element*)eventsRightClick->at(i).element;

                    if (event.mouseButton.x >= elm->getPosition().x &&
                        event.mouseButton.x <= elm->getPosition().x + elm->getSize().x &&
                        event.mouseButton.y >= elm->getPosition().y &&
                        event.mouseButton.y <= elm->getPosition().y + elm->getSize().y
                        ){

                            eventsRightClick->at(i).callback(eventsRightClick->at(i).element);
                    }

                }


            }
        }

    }
}



}
}
