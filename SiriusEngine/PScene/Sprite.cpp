#include "Sprite.hpp"

namespace sir{
namespace PScene{

Sprite::Sprite() : Image::Image()
{
    setType(sir::PCore::ELEMENT_SPRITE);

}

Sprite::~Sprite()
{
    //dtor
}

void Sprite::draw(){
    Image::draw();

}

void Sprite::update() {
    Image::update();

}

}
}
