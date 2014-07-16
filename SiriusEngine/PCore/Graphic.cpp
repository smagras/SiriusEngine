#include "Graphic.hpp"


namespace sir{
namespace PCore{


void Graphic::setPosition(sir::PSystem::Vector2F _position)
{
    position=_position;
    updateGraphic();
}

void Graphic::setSize(sir::PSystem::Vector2F _size)
{
    size=_size;
    updateGraphic();
}

void Graphic::setAngle(int _angle)
{
    angle=_angle;
    updateGraphic();
}

}
}
