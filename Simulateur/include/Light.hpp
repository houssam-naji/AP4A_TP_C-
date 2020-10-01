/**
 *
 * @author RICHARD Antoine
 * @file Sensor.hpp
 * @date 01/10/2020
 * @brief La classe Temperature permet de gérer les capteurs de lumière
 *
 *
*/

//
// Define guards
#ifndef LIGHT_H
#define LIGHT_H

#include "Sensor.hpp"


/**
*
* @class Server
* @brief La classe Temperature permet de gérer les capteurs de lumière
*
*/
class Light : public Sensor
{

    public:
        Light();
        Light(const Light& light_p);
        virtual ~Light();

    protected:
        int aleaGenVal();

    private:
};

#endif // LIGHT_H
