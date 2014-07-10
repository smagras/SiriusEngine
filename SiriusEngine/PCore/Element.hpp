/* 
 * File:   CElement.hpp
 * Author: STEVE
 *
 * Created on 27 janvier 2014, 20:13
 */

#ifndef CELEMENT_HPP
#define	CELEMENT_HPP

#include "../predef.hpp"
#include "../stdafx.hpp"

namespace sir{
namespace PCore{

enum ElementType {
    ELMT_STANDAR,
    ELMT_IMAGE,
    ELMT_SPRITE
 };

class Element {
public:
    Element();
    Element(const Element& orig);
    virtual ~Element();
    
    virtual void draw() = 0;
    virtual void update() = 0;
    
    void setScene();
    void getScene();
    
    void setType(ElementType t) {type = t;}
    ElementType getType() {return type;}
    
    
private:
    ElementType type;

};

} //PCore
} //sir

#endif	/* CELEMENT_HPP */

