/**
 *@author Hugo Audran
 *@file Sensor.hpp
 *@date 20/09/2020
 *@brief Header de la classe sensor classe mère de Humidity, Temperature, Sound, Light
 */

 // Define guards
#ifndef SENSOR_HPP_INCLUDED
#define SENSOR_HPP_INCLUDED
#include "cstdlib"

/**
*@class Sensor
*@brief Class Sensor contenant une forme canonique de Coplien et dont l'objectif est de récolter les données pour les renvoyer au serveur.
*/

class Sensor
{
protected:

public:
    // Définition de la forme canonique
    Sensor();
    Sensor(const Sensor&);
    virtual ~Sensor();
    Sensor &operator=(const Sensor&);

    /**
    *@brief Getter virtuel pour récupérer une donnée sous la forme de float dans une des classes filles de Sensor (Humidity,Temperature,Light,Sound)
    *@return float
    *@param None
    */

    virtual float getData();

    /**
    *@brief Méthode virtuelle permettant aux classes capteurs filles de Sensor de générer un nombre aléatoire et de l'affecter à un de ses attributs.
    *@return void
    *@param None
    */

    virtual void aleaGenVal();
};

#endif // SENSOR_HPP_INCLUDED
