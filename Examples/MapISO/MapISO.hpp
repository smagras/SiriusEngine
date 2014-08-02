#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include "../../SiriusEngine/SiriusEngine.hpp"

namespace Examples{

class MapISO : public sir::PCore::Engine
{
    public:
        MapISO(){}
        void start();
        sir::PGame::Game * game;

};

}

#endif // HELLOWORLD_H
