#include "Entity.hpp"

namespace sir{
namespace PGame{

Entity::Entity()
{
    setType(sir::PCore::ELEMENT_ENTITY);
    sprite = new sir::PScene::Sprite();
    animations = new std::map<std::string, sir::PGame::EntityAnimation>;

}

Entity::~Entity()
{
    //dtor
}

void Entity::addAnimation(sir::PGame::EntityAnimation animation){
    animations->insert(std::pair<std::string, sir::PGame::EntityAnimation>(animation.name,animation));
}

void Entity::playAnimation(string name){
    if (animations->find(name) != animations->end()){
        sir::PGame::EntityAnimation animation = animations->find(name)->second;
        sprite->init(animation.frameBox,animation.frameNumber ,animation.frameRate);
        sprite->play();
    }else{
        cout << "WARN| Animation doesn't exist: " << name << endl;
    }

}

void Entity::draw(){
    if(sprite != NULL){

        sprite->draw();
    }
}

void Entity::update(){

    if(sprite != NULL){
        sprite->update();

    }

}

void Entity::use(sf::Texture * _texture){
    sprite->use(_texture);
}

void Entity::setScene(PScene::Scene * _scene) {
    Element::setScene(_scene);
    sprite->setScene(this->getScene());

}


}
}
