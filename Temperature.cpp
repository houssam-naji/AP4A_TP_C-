#include "Temperature.h"

#include <iostream>
#include <stdlib.h>

Temperature::Temperature(): m_temperature(0)/*, m_unit('c')*/
{

}

Temperature::~Temperature()
{
    // Destructeur vide car aucune zone mémoire allouée
    // Unilisation future éventuelle si on passe unité en char* (ex : "celsius")
}

Temperature::Temperature (const Temperature& t): m_temperature(t.m_temperature)/*, m_unit(t.m_unit)*/
{

}


Temperature::Temperature (float t/*, char u*/) : m_temperature(t)/*, m_unit(u)*/
{

}

void Temperature::operator=(const Temperature& source)
{
    this->m_temperature = source.m_temperature;
    //this->m_unit = source.m_unit;
}

float Temperature::getTemperature()
{
    return m_temperature;
}

void Temperature::setTemperature(float newTemp)
{
    m_temperature = newTemp;
}

/*
char Temperature::getUnit()
{
    return m_unit;
}

void Temperature::setUnit(char newUnit)
{
    if (newUnit != 'f' || newUnit != 'c')
    {
        std::cout << "Erreur, unite non correcte" ;
    }

    else
    {
        m_unit = newUnit;
    }

}
*/
