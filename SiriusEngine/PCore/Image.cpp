#include "Image.hpp"


namespace sir{
namespace PCore{

Image::Image() : Element::Element()
{
    setType(ELEMENT_IMAGE);
    sprite = NULL;
}

Image::~Image()
{
    //dtor
}

void Image::use(sf::Image * image){

    //sprite = new sf::Sprite();
    //sprite->setImage(*image);
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
