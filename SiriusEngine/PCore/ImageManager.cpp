#include "ImageManager.hpp"

namespace sir{
namespace PCore{

ImageManager::ImageManager()
{
    images = new std::vector<sf::Image*>;
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
        sf::Image *img = new sf::Image();
        if(img->loadFromFile(file))
        {
            cout << file << "... Succes" << endl;
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
        sf::Image *img = new sf::Image();
        if(img->loadFromFile(file))
        {
            cout << file << "... Succes" << endl;
        }
        else cout << file << "... Fail" << endl;

        if(r > -1 && g > -1 && b > -1)
        {
            img->createMaskFromColor(sf::Color(r, g, b));
            //img->setSmooth(false);
        }

        imagesF->push_back(file);
        images->push_back(img);

    }




}

sf::Image*  ImageManager::get(string file)
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
