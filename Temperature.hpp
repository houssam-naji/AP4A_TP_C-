/**
 *@author Hugo Audran
 *@file Temperature.hpp
 *@date 28/09/2020
 *@brief Header de la classe Temperature classe fille de Sensor instanciant des capteurs qui transmettent la température dans la cabine de l'avion
 */

 // Define guards
#ifndef TEMPERATURE_HPP_INCLUDED
#define TEMPERATURE_HPP_INCLUDED
#include "Sound.hpp"

class Temperature : public Sensor
{
protected:
    float m_temperature; ///< Temperature en °C dans la cabine de l'avion
public:

    /**
    *@brief Getter qui renvoie m_temperature
    *@return float
    *@param None
    */

    float getData();

    /**
    *@brief Génére un flottant aléatoire et l'affecte à m_sound
    *@return void
    *@param None
    */

    void aleaGenVal();
};

#endif // TEMPERATURE_HPP_INCLUDED
