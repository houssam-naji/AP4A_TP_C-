/**
 *@author Hugo Audran
 *@file Humidity.hpp
 *@date 28/09/2020
 *@brief Header de la classe Humidity classe fille de Sensor instanciant des capteurs qui transmettent le taux d'humidité dans la cabine de l'avion
 */

 //Define guards
#ifndef HUMIDITY_HPP_INCLUDED
#define HUMIDITY_HPP_INCLUDED
#include "Sensor.hpp"

class Humidity : public Sensor
{
protected:
    float m_humidity; ///< Taux d'humidité en % dans la cabine de l'avion
public:

    /**
    *@brief Getter qui renvoie m_humidity
    *@return float
    *@param None
    */

    float getData();

    /**
    *@brief Génére un flottant aléatoire et l'affecte à m_humidity
    *@return void
    *@param None
    */

    void aleaGenVal();
};

#endif // HUMIDITY_HPP_INCLUDED
