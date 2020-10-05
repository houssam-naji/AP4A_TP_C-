#include <iostream>

#include "Server.hpp"

using namespace std;


//Constructeur de recopie
Server::Server(const Server& serv_p)
{
    this -> m_consolWriteActivation = serv_p.m_consolWriteActivation;
    this -> m_fileWriteActivation = serv_p.m_fileWriteActivation;
    this -> m_temperature = serv_p.m_temperature;
    this -> m_humidity = serv_p.m_humidity;
    this -> m_light = serv_p.m_light;
    this -> m_sound = serv_p.m_sound;
};


//Surcharge Opérateur d'affectation
Server Server::operator=(const Server& serv_p)
{
    if (this != &serv_p)
    {
        m_consolWriteActivation = serv_p.m_consolWriteActivation;
        m_fileWriteActivation = serv_p.m_fileWriteActivation;
        m_temperature = serv_p.m_temperature;
        m_humidity = serv_p.m_humidity;
        m_light = serv_p.m_light;
        m_sound = serv_p.m_sound;
    }

    return *this;
}


//Surcharge Opérateur << pour écrire dans un fichier
ofstream& operator<<(ofstream& file, const Server& server_p)
{
    server_p.fileWrite(file);
    return file;
}

//Surcharge Opérateur << pour écrire dans la console
ostream& operator<<(ostream& consol, const Server& server_p)
{
    server_p.consolWrite(consol);
    return consol;
}



//Fonction qui reçoit les données transmises par les capteurs et qui les enregistre dans les attributs de la classe Server
void Server::dataRcv(float temperature_p, float humidity_p, float light_p, float sound_p)
{
    m_temperature = temperature_p;
    m_humidity = humidity_p;
    m_light = light_p;
    m_sound = sound_p;
}



//Fonction qui écrit dans un fichier
void Server::fileWrite(std::ofstream& file)
{
    if (Server::m_fileWriteActivation)
    {
        file << "";
    }
}



//Fonction qui écrit dans la console
void Server::consolWrite(std::ostream& consol)
{
        if (Server::m_consolWriteActivation)
    {
        consol << "";
    }
}

