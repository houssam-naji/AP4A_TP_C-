/**
 *@author Hugo Audran
 *@file Sound.hpp
 *@date 28/09/2020
 *@brief Header de la classe Sound classe fille de Sensor instanciant des capteurs qui renvoient l'intensité sonore dans la cabine de l'avion
 */

 // Define guards
#ifndef SOUND_HPP_INCLUDED
#define SOUND_HPP_INCLUDED
#include "Light.hpp"

class Sound : public Sensor
{
protected:
    int m_sound; ///< Intensité sonore en dB dans la cabine de l'avion
public:

    /**
    *@brief Getter qui renvoie m_sound
    *@return int
    *@param None
    */

    int getSon();

    /**
    *@brief Génére un entier aléatoire et l'affecte à m_sound
    *@return void
    *@param None
    */

    void aleaGenVal();
};

#endif // SOUND_HPP_INCLUDED
