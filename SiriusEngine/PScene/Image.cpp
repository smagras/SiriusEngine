#include "Image.hpp"


namespace sir{
namespace PScene{

Image::Image() //: sir::PCore::Element::Element()
{
    setType(sir::PCore::ELEMENT_IMAGE);
    sprite = new sf::Sprite();
}

Image::~Image()
{
    //dtor
}

void Image::use(sf::Texture * _texture){
    texture = _texture;


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

void Image::updateGraphic(){

    sprite->setPosition(this->getPosition().getX(),this->getPosition().getY());

}

void Image::update(){
//cout << "mdr" << endl;
}


}
}
