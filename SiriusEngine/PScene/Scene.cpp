#include "Scene.hpp"

namespace sir{
namespace PScene{

Scene::Scene()
{
    elements = new std::vector<sir::PCore::Element*>();
}

Scene::~Scene()
{
    //dtor
}


void Scene::add(sir::PCore::Element* element){

    if (element != NULL){

        element->setScene(this);
        elements->push_back(element);

    }

}

void Scene::draw(){

    for (unsigned i=0; i< elements->size(); i++)
    {

        elements->at(i)->draw();
    }

}


void Scene::update(){

    for (unsigned i=0; i< elements->size(); i++)
    {
        elements->at(i)->update();

    }

}

}
}
