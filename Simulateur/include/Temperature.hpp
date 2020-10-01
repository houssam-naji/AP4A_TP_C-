/**
 *
 * @author RICHARD Antoine
 * @file Temperature.hpp
 * @date 01/10/2020
 * @brief La classe Temperature permet de gérer les capteurs de temperature
 *
*/

//
// Define guards
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "Sensor.hpp"


/**
*
* @class Temperature
* @brief La classe Temperature permet de gérer les capteurs de temperature
*
*
*/
class Temperature : public Sensor
{

    public:
        Temperature();
        Temperature(const Temperature& temperature_p);
        virtual ~Temperature();

    protected:
        int aleaGenVal();

    private:
};

#endif // SOUND_H
