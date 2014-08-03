#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H


#include "../stdafx.hpp"
#include "../predef.hpp"

namespace sir{
namespace PEvent{
class Event{
    public:
    void (*callback)(sir::PCore::Node*);
    sir::PCore::Node* element;
    sf::Keyboard::Key key;
    //std::vector<int> parameters;
};

class EventManager
{
    public:
        /** Default constructor */
        EventManager();

        void update();
        void bindRightClick(sir::PCore::Node* _elementCliked,void (*callback)(sir::PCore::Node*));
        void bindKeyPress(sir::PCore::Node* _elementKeyPressed,sf::Keyboard::Key _key,void (*callback)(sir::PCore::Node*));

        void setEngine(PCore::Engine * _engine){engine =  _engine;}
        PCore::Engine * getEngine() {return engine;}

    private:
        PCore::Engine * engine;
        std::vector<Event>* eventsRightClick;
        std::vector<Event>* eventsKeyPress;
};

}
}

#include "../PCore/Engine.hpp"
#include "Node.hpp"
//#include "../PCore/Element.hpp"


#endif // EVENTMANAGER_H
