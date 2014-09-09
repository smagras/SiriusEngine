#include "EntityAnimation.hpp"


namespace sir{
namespace PGame{

EntityAnimation::EntityAnimation(string _name,sir::PSystem::RectangleI _frameBox,int _frameNumber,int _frameRate){
    name = _name;
    frameBox = _frameBox;
    frameNumber = _frameNumber;
    frameRate = _frameRate;
}

}}
