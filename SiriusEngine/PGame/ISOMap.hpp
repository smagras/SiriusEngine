#ifndef ISOMAP_H
#define ISOMAP_H

#include "../stdafx.hpp"
#include "../predef.hpp"
#include "../PGame/GameElement.hpp"

namespace sir{
namespace PGame{

class ISOMap : public sir::PGame::GameElement
{
    public:
        /** Default constructor */
        ISOMap();
        /** Default destructor */
        virtual ~ISOMap();

        /** Define the texture to use for image */
        void use(sf::Texture * _texture);

        void render();

        void draw();
        void update();
        void updateGraphic();

    private:

        sf::Texture * texture;

};

}
}

#include "../PGame/Game.hpp"

#endif // ISOMAP_H
