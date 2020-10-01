/**
 *
 * @author RICHARD Antoine
 * @file Sensor.hpp
 * @date 01/10/2020
 * @brief La classe Sensor est abstraite, c'est la classe mère de tous les capteurs.
 *
 *
*/

//
// Define guards
#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>

/**
*
* @class Sensor
* @brief La classe Sensor est abstraite, c'est la classe mère de tous les capteurs.
*
*
*/
class Sensor
{
    public:
        Sensor();
        virtual ~Sensor();
        int getData();

    protected:
        virtual int aleaGenVal() = 0; //méthode virtuelle pure (déclarée mais non définie) cela fait que Sensor est abstraite 

    private:
        
};

#endif // SENSOR_H
