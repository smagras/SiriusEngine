#include "ISOMap.hpp"

namespace sir{
namespace PGame{

ISOMap::ISOMap()
{
    setType(sir::PCore::ELEMENT_IMAGE);


}

ISOMap::~ISOMap()
{
    //dtor
}

void ISOMap::use(sf::Texture * _texture){
    texture = _texture;


}



void ISOMap::draw(){
    int tile_width = 120;
    int tile_height = 120;
    int map_x = 200;
    int map_y = 200;

    sir::PGame::Game * myGame = (sir::PGame::Game *)this->getScene();

    int xmin = myGame->getCameraPosition().x - myGame->getSize().x/2 - tile_width;
    int xmax = myGame->getCameraPosition().x + myGame->getSize().x/2;
    int ymin = myGame->getCameraPosition().y - myGame->getSize().y/2 - tile_height;
    int ymax = myGame->getCameraPosition().y + myGame->getSize().y/2;

    for(int i = 0;i < map_x;i++){
        for(int j = 0;j < map_y;j++)
        {
            int x = (j * tile_width / 2) + (i * tile_width / 2);
            int y = (i * tile_height / 2) - (j * tile_height / 2);

            if( x >= xmin &&
                y >= ymin &&
                x <= xmax &&
                y <= ymax ){

                    sf::CircleShape square(60, 4);
                    square.setTexture(texture);
                    square.setPosition(x  ,y );
                    this->getScene()->getRender()->draw(square);
                }

        }
    }
}

void ISOMap::update(){
}

void ISOMap::updateGraphic(){

}

}
}
