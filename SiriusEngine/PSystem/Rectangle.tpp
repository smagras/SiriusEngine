#include "Rectangle.hpp"


namespace sir
{
namespace PSystem
{



template<typename Type>
Rectangle<Type>::Rectangle()
{
    x = 0;
    y = 0;
    width = 0;
    height = 0;
}



template<typename Type>
Rectangle<Type>::Rectangle( Type _x,Type _y,Type _width,Type _height)
{
    x = _x;
    y = _y;
    width = _width;
    height = _height;
}

}
}
