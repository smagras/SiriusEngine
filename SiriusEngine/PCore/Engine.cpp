/* 
 * File:   CEngine.cpp
 * Author: STEVE
 * 
 * Created on 27 janvier 2014, 00:06
 */


#include "Engine.hpp"



namespace sir{
namespace PCore{
    
Engine::Engine() {
    
}

Engine::Engine(const Engine& orig) {
}

Engine::~Engine() {
}

void Engine::run()
{
cout << "lol" << endl;

 // création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // on fait tourner le programme tant que la fenêtre n'a pas été fermée
    while (window.isOpen())
    {
        // on traite tous les évènements de la fenêtre qui ont été générés depuis la dernière itération de la boucle
        sf::Event event;
        while (window.pollEvent(event))
        {
            // fermeture de la fenêtre lorsque l'utilisateur le souhaite
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // effacement de la fenêtre en noir
        window.clear(sf::Color::Black);

        // c'est ici qu'on dessine tout
        // window.draw(...);

        // fin de la frame courante, affichage de tout ce qu'on a dessiné
        window.display();
    }

   
}

} //PCore
} //sir

