#ifndef DBOX_H
#define DBOX_H



#include "../../../stdafx.hpp"
#include "../../../predef.hpp"
#include "../../../PInterface/Panel.hpp"

namespace sir{
namespace PPlugin{
namespace Standard{
namespace Dbox{


class DBox : public sir::PInterface::Panel
{
    public:
        /** Default constructor */
        DBox();

        void draw();

    private:
        sf::Font font;
        sf::Text text;
        sf::RectangleShape border;
        sf::RectangleShape title;

};

}}}}

#endif // DBOX_H
