#include "Scene.hpp"

namespace sir{
namespace PScene{

Scene::Scene()
{
    elements = new std::vector<sir::PCore::Element*>();
    scenes = new std::vector<sir::PScene::Scene*>();
    render = new sf::RenderTexture();
    spriteRender = new  sf::Sprite();
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

void Scene::add(sir::PScene::Scene* scene){
    if (scene != NULL){
        scene->setEngine(this->getEngine());
        scenes->push_back(scene);

    }
}

void Scene::draw(){
    render->clear();
    for (unsigned i=0; i< scenes->size(); i++)
    {
        scenes->at(i)->draw();
        render->draw(*scenes->at(i)->spriteRender);
    }

    for (unsigned i=0; i< elements->size(); i++)
    {

        elements->at(i)->draw();
    }

    render->display();
    spriteRender->setTexture(render->getTexture());

    //this->getEngine()->getRender()->draw(*spriteRender);


}


 void Scene::updateGraphic() {
     spriteRender->setPosition(this->getPosition().x,this->getPosition().y);
     render->create(this->getSize().x,this->getSize().y);
 }

void Scene::update(){
    for (unsigned i=0; i< scenes->size(); i++)
    {
        scenes->at(i)->update();
    }

    for (unsigned i=0; i< elements->size(); i++)
    {
        elements->at(i)->update();

    }

}

}
}
