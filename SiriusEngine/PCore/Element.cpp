/*
 * File:   Element.cpp
 * Author: STEVE
 *
 * Created on 27 janvier 2014, 20:13
 */

#include "Element.hpp"

namespace sir{
namespace PCore{


Element::Element() {
    setType(ELEMENT_STANDAR);
    this->setPosition(sir::PSystem::Vector2F(0,0));
}


Element::~Element() {
}

} //PCore
} //sir
