#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include "../../SiriusEngine/SiriusEngine.hpp"

namespace Examples{

class SimpleGame : public sir::PCore::Engine
{
    public:
        SimpleGame(){}
        void start();
        sir::PGame::Game * game;

};

}

#endif // HELLOWORLD_H
