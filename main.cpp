/*
 * File:   main.cpp
 * Author: STEVE
 *
 * Created on 26 janvier 2014, 21:58
 */

#include "Examples/HelloWorld/HelloWorld.hpp"

using namespace Examples;


int main(int argc, char** argv) {

    // Basic example
    Examples::HelloWorld * helloWorld = new Examples::HelloWorld();
    helloWorld->run();

    return true;
}
