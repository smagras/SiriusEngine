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

void Image::crop(int x,int y, int width,int height){
    sprite->setTextureRect(sf::IntRect(x,y,width,height));
}

void Image::draw(){
    if(sprite){

        this->getScene()->getEngine()->getRender()->draw(*sprite);

    }

}

void Image::update(){
cout << "mdr" << endl;
}


}
}
