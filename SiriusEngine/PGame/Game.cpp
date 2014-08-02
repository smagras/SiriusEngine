#include "Game.hpp"

namespace sir{
namespace PGame{

Game::Game()
{
    Scene();
    view = new sf::View(sf::FloatRect(0, 0, 100, 100));
}

void Game::add(sir::PGame::GameElement* element){
    Scene::add(element);
    this->getRender()->setView(*view);
}

void Game::updateGraphic() {
    Scene::updateGraphic();
    view->setSize(this->getSize().x,this->getSize().y);
}

void Game::setCameraPosition(sir::PSystem::Vector2F _cameraPosition)
{
    cameraPosition = _cameraPosition;
    view->setCenter(_cameraPosition.x,_cameraPosition.y);
}

}}
