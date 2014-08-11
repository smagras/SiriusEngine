#ifndef PANEL_H
#define PANEL_H

#include "../stdafx.hpp"
#include "../predef.hpp"

#include "../PScene/Scene.hpp"
#include "../PInterface/InterfaceElement.hpp"

namespace sir{
namespace PInterface{

class Panel : public sir::PScene::Scene
{
    public:
        /** Default constructor */
        Panel();


        /**
        * Add a interface element to the interface
        */
        void add(sir::PInterface::InterfaceElement* element);





    private:


};

}}

#endif // GAME_H
