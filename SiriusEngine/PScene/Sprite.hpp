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


        /**
        * Display the next animation frame
        */
        void nextFrame();

        /**
        * Start the animation of sprite
        */
        void play();

        /**
        * Stop the animation of sprite
        */
        void stop();

        /**
        * Defines the animation settings
        */
        void init(sir::PSystem::RectangleI _coords,int _numberOfFrame,int _frameRate);

        void draw();
        void update();

    private:

        sir::PSystem::RectangleI frameBox;
        int currentFrameNumber;
        int numberOfFrame;
        int frameRate;
        bool isPlaying;
};

}
}

#endif // SPRITE_H
