/*
 * File:   Element.hpp
 * Author: STEVE
 *
 * Created on 27 janvier 2014, 20:13
 */

#ifndef ELEMENT_HPP
#define	ELEMENT_HPP



#include "../stdafx.hpp"
#include "../predef.hpp"

namespace sir{
namespace PCore{

/**
* Define the type of an element
*/
enum ElementType {
    ELEMENT_STANDAR,
    ELEMENT_IMAGE,
    ELEMENT_SPRITE
};

class Element {
public:
    Element();
    virtual ~Element();

    /**
    * Return a new element like this.
    */
    Element * copy();

    /**
    * Drawn element in the scene
    */
    virtual void draw() = 0;

    /**
    * Update element data like position, rotation...
    */
    virtual void update() = 0;

    void setScene(PScene::Scene * _scene) {scene = _scene;}
    PScene::Scene * getScene() {return scene;}

    void setType(ElementType t) {type = t;}
    ElementType getType() {return type;}


private:
    ElementType type;
    PScene::Scene * scene;

};

} //PCore
} //sir

#include "../PScene/Scene.hpp"

#endif	/* CELEMENT_HPP */

