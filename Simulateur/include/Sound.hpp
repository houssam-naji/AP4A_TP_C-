/**
 *
 * @author RICHARD Antoine
 * @file Sound.hpp
 * @date 01/10/2020
 * @brief La classe Sound permet de gérer les capteurs de son
 *
*/

//
// Define guards
#ifndef SOUND_H
#define SOUND_H

#include "Sensor.hpp"


/**
*
* @class Sound
* @brief La classe Sound permet de gérer les capteurs de son
*
*
*/
class Sound : public Sensor
{

    public:
        Sound();
        Sound(const Sound& sound_p);
        virtual ~Sound();

    protected:
        int aleaGenVal();

    private:
};

#endif // SOUND_H
