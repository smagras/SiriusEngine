#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

#include "../stdafx.hpp"
#include "../predef.hpp"


namespace sir{
namespace PCore{



class ImageManager
{
    public:
        /** Default constructor */
        ImageManager();

        /**
        Load an image whit alpha color
        */
        void load(string file,int r,int g,int b);

        /**
        Load an image
        */
        void load(string file);

        /**
        Get an image
        */
        sf::Texture*  get(string file);

    private:
        std::vector<string>* imagesF;
        std::vector<sf::Texture*>* images;
};


}
}

#endif // IMAGEMANAGER_H
