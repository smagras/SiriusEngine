#include "HelloWorld.hpp"

namespace Examples{

void HelloWorld::run()
{
    sir::PCore::Engine eeee;
    eeee.run();

    sir::PSystem::Vector2i lol(3,3);
    sir::PSystem::Vector2i mdr(8,8);

    sir::PSystem::Vector2i hh = lol.distance(mdr);

    cout << hh.x << endl;

}

}
