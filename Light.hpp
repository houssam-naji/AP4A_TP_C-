/**
 *@author Hugo Audran
 *@file Light.hpp
 *@date 28/09/2020
 *@brief Header de la classe Light classe fille de Sensor instanciant des capteurs qui transmettent si la lumière est allumée ou non
 */

 // Define guards
#ifndef LIGHT_HPP_INCLUDED
#define LIGHT_HPP_INCLUDED
#include "Humidity.hpp"

class Light : public Sensor
{
protected:
    bool m_light; ///< Lumière allumée ou éteinte dans la cabine de l'avion
public:

    /**
    *@brief Getter qui renvoie m_light
    *@return bool
    *@param None
    */

    bool getLumiere();

    /**
    *@brief Génére un booléen aléatoire et l'affecte à m_light
    *@return void
    *@param None
    */

    void aleaGenVal();
};

#endif // LIGHT_HPP_INCLUDED
