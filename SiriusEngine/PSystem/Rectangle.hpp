#ifndef RECTANGLE_H
#define RECTANGLE_H


namespace sir{
namespace PSystem{

template<typename Type>
class Rectangle
{
    public:
        /** Default constructor */
        Rectangle();
        Rectangle( Type _x,Type _y,Type _width,Type _height);

        Type x;
        Type y;
        Type width;
        Type height;
};



}
}

#include "Rectangle.tpp"

namespace sir{
namespace PSystem{

typedef class Rectangle<int> RectangleI;
typedef class Rectangle<float> RectangleF;


}//PSystem
}//sir

#endif // RECTANGLE_H
