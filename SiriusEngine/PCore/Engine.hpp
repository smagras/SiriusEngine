/*
 * File:   CEngine.hpp
 * Created on 27 janvier 2014, 00:06
 * */

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

#ifndef CENGINE_HPP
#define	CENGINE_HPP

#include "../predef.hpp"
#include "../stdafx.hpp"

namespace sir{
namespace PCore{
    

class Engine {
public:
    Engine();
    Engine(const Engine& orig);
    virtual ~Engine();
    
    /**
    * Lance l'application.
    */
    void run();
    
    
private:

};

} //PCore
} //sir

#endif	/* CENGINE_HPP */

