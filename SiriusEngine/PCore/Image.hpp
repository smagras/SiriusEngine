#ifndef IMAGE_H
#define IMAGE_H

#include "../stdafx.hpp"
#include "../predef.hpp"
#include "Element.hpp"

namespace sir{
namespace PCore{

class Image : public Element
{
    public:
        /** Default constructor */
        Image();
        /** Default destructor */
        virtual ~Image();

        void use(sf::Image * image);

        void draw();
        void update();

    private:
        sf::Sprite * sprite;
};



}
}


#endif // IMAGE_H

