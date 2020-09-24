/**
 *@author Hugo Audran
 *@file Server.hpp
 *@date 20/09/2020
 *@brief Implementation de la classe server ayant pour but de stocker et afficher les données provenant des capteurs (class Sensor).
 */

#include <iostream>
#include "Server.hpp"
#include <fstream>

 using namespace std;

Server::Server(Sensor sensor)
{
    m_sensor.m_humidity = sensor.m_humidity;
    m_sensor.m_temperature = sensor.m_temperature;
    m_sensor.m_sound = sensor.m_sound;
    m_sensor.m_light = sensor.m_light;
}

Server::~Server(){};

void Server::dataRcv(Sensor sensor)
{
    m_sensor.m_humidity = sensor.m_humidity;
    m_sensor.m_sound = sensor.m_sound;
    m_sensor.m_temperature = sensor.m_temperature;
    m_sensor.m_light = sensor.m_light;
}

void Server::consolWrite(ostream& flux)const
{
    flux << m_sensor.m_humidity << "g/m³ ; " << m_sensor.m_sound << " dB ; " << m_sensor.m_temperature << " °C ; lumière allumée : " << m_sensor.m_light;
}

void Server::fileWrite(ofstream& file)const
{
    file << m_sensor.m_humidity << "g/m³ ; " << m_sensor.m_sound << " dB ; " << m_sensor.m_temperature << " °C ; lumière allumée : " << m_sensor.m_light;
}

Server & Server::operator=(const Server &  server_)
{
    if (&server_ != this)
    {
        consolActivation = server_.consolActivation;
        logActivation = server_.logActivation;
        m_sensor = server_.m_sensor;
    }
    return *this;
}

ostream& operator<<(ostream &flux, Server const &serv)
{
    serv.consolWrite(flux);
    return flux;
}

ofstream& operator<<(ofstream &file, Server const &serv)
{
    serv.fileWrite(file);
    return file;
}
