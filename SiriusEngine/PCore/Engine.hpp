/**
 * @author Magras Steve
 * @class sir::PCore::CEngine
 *
 * @brief Cette classe est le noyau de l'application, elle gère les différent
 * éléments de l'application.
 *
 *
 * CEngine est le noyau de l'application, il permet de lancer tout les sous systemes. \n\n
 * Il ne doit y avoir qu'une seul occurence de cette classe. \n
 * La position et l'affichage des éléments a l'écran est gérer par celle ci.\n
 * Toute les initialisations doivent être faite avant de lancer
 * la méthode run.\n
 * \n\n
 * Example d'utilisation:
 * @code
 * sir::PCore::CEngine * engine = new sir::PCore::CEngine();
 *
 * // ici ce trouve les initialisations
 * // ex: engine->add(scene01);
 * // ...
 *
 *
 * engine->run();
 * @endcode
 *
 */

#ifndef ENGINE_HPP
#define	ENGINE_HPP



#include "../stdafx.hpp"
#include "../predef.hpp"

#include "ImageManager.hpp"
#include "Node.hpp"

namespace sir{
namespace PCore{


class Engine : public Node{

public:
    Engine();
    virtual ~Engine();

    /**
    * Initialization and configuration
    */
    void init(int width,int height,string title);

    /**
    * Run application and all scenes associated.
    */
    void run();

    /**
    * Clear all actives scenes after a run.
    */
    void clear();

    /**
    * Add a scene before the running
    */
    void add(sir::PScene::Scene* scene);


    ImageManager * getImageManager() {return imageManager;}
    sf::RenderWindow * getRender() {return render;}

    int getFramerate() {return framerate;}

    sir::PSystem::Time getElsapedTime() {return clock.getElapsedTime();}

    /**
    * Define updates frequencies, then the engine cant refresh data before this limit.
    */
    void setUpdateTic(int _updateTic) {updateTic = _updateTic;}
    int getUpdateTic() {return updateTic;}


    sir::PEvent::EventManager * getEventManager() {return eventManager;}

private:

    std::vector<sir::PScene::Scene*>* scenes;
    sf::RenderWindow *render;
    ImageManager * imageManager;

    int updateTic;
    sf::Clock clockFPS;
    sf::Clock clock;
    int framerate;
    sf::Time lastUpdate;
    sir::PEvent::EventManager * eventManager;

};


} //PCore
} //sir

#include "../PScene/Scene.hpp"
#include "../PEvent/EventManager.hpp"

#endif	/* ENGINE_HPP */

