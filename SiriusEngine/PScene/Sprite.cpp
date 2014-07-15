#include "Sprite.hpp"

namespace sir{
namespace PScene{

Sprite::Sprite() : Image::Image()
{
    setType(sir::PCore::ELEMENT_SPRITE);
    isPlaying = false;

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

    if (isPlaying){

        nextFrame();
    }

}


void Sprite::init(sir::PSystem::RectangleI _coords,int _numberOfFrame,int _frameRate){

    frameBox = _coords;
    currentFrameNumber = 0;
    numberOfFrame = _numberOfFrame;
    frameRate = _frameRate;
}

void Sprite::play(){
    this->crop(frameBox);
    currentFrameNumber = 0;
    isPlaying = true;
}

void Sprite::nextFrame(){
    currentFrameNumber++;
    if (currentFrameNumber >= numberOfFrame) currentFrameNumber = 0;

    sir::PSystem::RectangleI newBox = frameBox;
    newBox.x = frameBox.x + (frameBox.width * currentFrameNumber);
    this->crop(newBox);

}

}
}
