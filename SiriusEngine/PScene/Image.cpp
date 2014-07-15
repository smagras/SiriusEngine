#include "Image.hpp"


namespace sir{
namespace PScene{

Image::Image() //: sir::PCore::Element::Element()
{
   /* setType(sir::PCore::ELEMENT_IMAGE);
    sprite = NULL;*/
}

Image::~Image()
{
    //dtor
}

void Image::use(sf::Texture * _texture){
    texture = _texture;
    sprite = new sf::Sprite();

    sprite->setTexture(*texture);

}

void Image::crop(sir::PSystem::RectangleI  _coords){
    sprite->setTextureRect(sf::IntRect(_coords.x,_coords.y,_coords.width,_coords.height));
}

void Image::draw(){
    if(sprite){

        this->getScene()->getEngine()->getRender()->draw(*sprite);

    }

}

void Image::update(){
//cout << "mdr" << endl;
}


}
}
