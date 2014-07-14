#ifndef IMAGE_H
#define IMAGE_H

#include "../stdafx.hpp"
#include "../predef.hpp"
#include "Element.hpp"

namespace sir{
namespace PScene{

class Image : public sir::PCore::Element
{
    public:
        /** Default constructor */
        Image();
        /** Default destructor */
        virtual ~Image();

        /** Define the texture to use for image */
        void use(sf::Texture * _texture);

        /** Get only the image part inside rect */
        void crop(int x,int y, int width,int height);

        void draw();
        void update();

    private:
        sf::Sprite * sprite;
        sf::Texture * texture;
};



}
}


#endif // IMAGE_H

