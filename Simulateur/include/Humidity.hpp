/**
 *
 * @author RICHARD Antoine
 * @file Humidity.hpp
 * @date 01/10/2020
 * @brief La classe Humidity permet de gérer les capteurs d'humidité
 *
*/

//
// Define guards
#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "Sensor.hpp"


/**
*
* @class Humidity
* @brief La classe Humidity permet de gérer les capteurs d'humidité
*
*
*/
class Humidity : public Sensor
{

    public:
        Humidity();
        Humidity(const Humidity& humidity_p);
        virtual ~Humidity();

    protected:
        int aleaGenVal();

    private:
};

#endif // HUMIDITY_H
