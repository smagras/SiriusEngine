/*
 * File:   main.cpp
 * Author: STEVE
 *
 * Created on 26 janvier 2014, 21:58
 */


//#include "Examples/HelloWorld/HelloWorld.hpp"
//#include "Examples/MapISO/MapISO.hpp"
#include "Examples/SimpleGame/SimpleGame.hpp"

int main(int argc, char** argv) {

    // Basic example
    /*Examples::HelloWorld * helloWorld = new Examples::HelloWorld();
    helloWorld->run();*/


    // How to make a map
    /*Examples::MapISO * mapISO = new Examples::MapISO();
    mapISO->start();*/

    // How to make a map
    Examples::SimpleGame * mapISO = new Examples::SimpleGame();
    mapISO->start();


    return true;
}
