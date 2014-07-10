/* 
 * File:   CElement.cpp
 * Author: STEVE
 * 
 * Created on 27 janvier 2014, 20:13
 */

#include "Element.hpp"

namespace sir{
namespace PCore{
    

Element::Element() {
    type = ELMT_STANDAR;
}

Element::Element(const Element& orig) {
}

Element::~Element() {
}

} //PCore
} //sir