#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H


#include "../stdafx.hpp"
#include "../predef.hpp"

namespace sir{
namespace PEvent{
class Event{
    public:
    void (*callback)(sir::PCore::Element*);
    sir::PCore::Element* element;
};

class EventManager
{
    public:
        /** Default constructor */
        EventManager();

        void update();
        void bindRightClick(sir::PCore::Element* _elementCliked,void (*callback)(sir::PCore::Element*));

        void setEngine(PCore::Engine * _engine){engine =  _engine;}
        PCore::Engine * getEngine() {return engine;}

    private:
        PCore::Engine * engine;
        std::vector<Event>* eventsRightClick;
};

}
}

#include "../PCore/Engine.hpp"
#include "../PCore/Element.hpp"


#endif // EVENTMANAGER_H
