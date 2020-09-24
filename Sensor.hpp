/**
 *@author Hugo Audran
 *@file Sensor.hpp
 *@date 20/09/2020
 *@brief Header de la classe sensor ayant pour but de récolter les données des class Humidity, Temperature, Sound et Light afin de les transmettre au serveur.
 */

#ifndef SENSOR_HPP_INCLUDED
#define SENSOR_HPP_INCLUDED
#include "Humidity.hpp"
#include "Light.hpp"
#include "Sound.hpp"
#include "Temperature.hpp"

/**
*@class Sensor
*@brief Class Server contenant une forme canonique de Coplien et dont l'objectif est de récolter les données pour les renvoyer au serveur.
*/

class Sensor
{
public:
    float m_temperature ; ///< Temperature à bord de l'avion provenant de la classe Temperature.
    float m_humidity; ///< Taux d'humidité à bord de l'avion provenant de la classe Humidity.
    int m_sound; ///<  Puissance sonore à bord de l'avion provenant de la Sound.
    bool m_light; ///< Lumière allumée ou éteinte à bord de l'avion

    // Définition de la forme canonique
    Sensor();
    Sensor (float temperature, float humidity, int sound, bool light); // Constructeur paramétré
    Sensor(const Sensor&);
    ~Sensor();
    Sensor &operator=(const Sensor&);

};

#endif // SENSOR_HPP_INCLUDED
