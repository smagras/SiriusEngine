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

        //this->setPosition(sir::PSystem::Vector2F(this->getPosition().getX()+4,this->getPosition().getY()+4));

        if (lastUpdate.asMilliseconds() + frameRate < this->getScene()->getEngine()->getElsapedTime().asMilliseconds() ){
            nextFrame();
            lastUpdate = this->getScene()->getEngine()->getElsapedTime();
        }

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

void Sprite::stop(){
    isPlaying = false;
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
