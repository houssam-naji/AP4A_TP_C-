/**
* @author Loïc_Hug
* @file Sensor.hpp
* @date 03/10/2020
* @brief La classe ”Sensor” représente la classe mère sur laquelle sont basées les classes de nos
capteurs.
*/


#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>

class Sensor {
    protected :

        std::string m_dataName;
        std::string m_sensorType;
        float m_dataValue;
        
        virtual void aleaGenVal() const = 0;

    public :

        Sensor();
        Sensor(std::string);
        Sensor (const Sensor&);
        virtual int getData() const = 0;
        void setDataName(std::string);
        std::string getDataName();
        void setSensorType(std::string);
        std::string getSensorType();
        virtual ~Sensor();

};

#endif /* SENSOR_H */