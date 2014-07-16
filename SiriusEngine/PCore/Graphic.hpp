#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "../stdafx.hpp"
#include "../predef.hpp"


namespace sir{
namespace PCore{

class Graphic
{
    public:

        sir::PSystem::Vector2F getPosition() {return position;}
        sir::PSystem::Vector2F getSize() {return size;}
        int getAngle() {return angle;}


        void setPosition(sir::PSystem::Vector2F _position);
        void setSize(sir::PSystem::Vector2F _size);
        void setAngle(int _angle);

        virtual void updateGraphic() = 0;


    private:
        sir::PSystem::Vector2F position;
        sir::PSystem::Vector2F size;
        int angle;



};

}
}

#endif // GRAPHIC_H
