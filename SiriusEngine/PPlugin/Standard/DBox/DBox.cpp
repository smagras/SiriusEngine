#include "DBox.hpp"


namespace sir{
namespace PPlugin{
namespace Standard{
namespace Dbox{

DBox::DBox()
{
    Panel();
    this->setSize(sir::PSystem::Vector2F(200,100));


    if (font.loadFromFile("Examples/Resources/Font/arial.ttf"))
    {

        text.setFont(font);

        text.setCharacterSize(10);
        text.setColor(sf::Color::White);


    }


    border.setSize(sf::Vector2f(170, 150));
    border.setFillColor(sf::Color(255,255,255,180));

    title.setSize(sf::Vector2f(170-2, 20));
    title.setPosition(sf::Vector2f(1, 1));
    title.setFillColor(sf::Color(20,20,20));




}


void DBox::draw(){

    getRender()->clear(sf::Color(0,0,0,0));



    getRender()->draw(border);
    getRender()->draw(title);


    text.setString("Developer Box");
    text.setPosition(sf::Vector2f(4, 3));
    getRender()->draw(text);
    string fps = sir::PSystem::Util::to_string(this->getEngine()->getFramerate());
    text.setString("FPS: "+ fps);
    text.setPosition(sf::Vector2f(4, 25));
    getRender()->draw(text);


    getRender()->display();
    spriteRender->setTexture(getRender()->getTexture());

}


}}}}
