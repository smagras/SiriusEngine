#ifndef ENTITYANIMATION_H
#define ENTITYANIMATION_H

#include "../stdafx.hpp"
#include "../predef.hpp"

namespace sir{
namespace PGame{


class EntityAnimation
{
    public:
        EntityAnimation(string _name,sir::PSystem::RectangleI _frameBox,int _frameNumber,int _frameRate);
        string name;
        sir::PSystem::RectangleI frameBox;
        int frameNumber;
        int frameRate;

};

}}

#endif // ENTITYANIMATION_H
