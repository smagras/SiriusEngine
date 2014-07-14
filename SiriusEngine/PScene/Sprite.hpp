#ifndef SPRITE_H
#define SPRITE_H

#include "../stdafx.hpp"
#include "../predef.hpp"
#include "Image.hpp"

namespace sir{
namespace PScene{

class Sprite : public Image
{
    public:
        /** Default constructor */
        Sprite();
        /** Default destructor */
        virtual ~Sprite();

        void draw();
        void update();

    private:
};

}
}

#endif // SPRITE_H
