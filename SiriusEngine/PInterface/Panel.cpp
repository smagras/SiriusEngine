#include "Panel.hpp"

namespace sir{
namespace PInterface{


Panel::Panel()
{
    Scene();

}

void Panel::add(sir::PInterface::InterfaceElement* element){
    Scene::add(element);

}


}}
