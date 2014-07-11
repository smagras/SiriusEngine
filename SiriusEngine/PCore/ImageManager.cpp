#include "ImageManager.hpp"

namespace sir{
namespace PCore{

ImageManager::ImageManager()
{
    images = new std::vector<sf::Texture*>;
    imagesF = new std::vector<string>;
}



void ImageManager::load(string file)
{

    bool next = true;

    for (unsigned i=0; i<imagesF->size(); i++)
    {
        if (imagesF->at(i) == file)
        {
            next = false;
        }
    }

    if ( next )
    {
        sf::Texture *img = new sf::Texture();
        if(img->loadFromFile(file))
        {
            cout << file << "... OK" << endl;
        }
        else cout << file << "... Fail" << endl;

        imagesF->push_back(file);
        images->push_back(img);


    }


}

void ImageManager::load(string file,int r= -1,int g= -1,int b= -1)
{

    bool next = true;

    for (unsigned i=0; i<imagesF->size(); i++)
    {
        if (imagesF->at(i) == file)
        {
            next = false;
        }
    }

    if ( next )
    {

        sf::Image image;


        if(image.loadFromFile(file))
        {
            cout << file << "... OK" << endl;
        }
        else cout << file << "... Fail" << endl;

        if(r > -1 && g > -1 && b > -1)
        {
            image.createMaskFromColor(sf::Color(r, g, b));
            sf::Texture *texture = new sf::Texture();
            texture->loadFromImage(image);

            texture->setSmooth(false);
            imagesF->push_back(file);
            images->push_back(texture);
        }



    }




}

sf::Texture*  ImageManager::get(string file)
{
    for (unsigned i=0; i<imagesF->size(); i++)
    {
        if (imagesF->at(i) == file)
        {
            return images->at(i);
        }
    }
    return NULL;
}

}
}
