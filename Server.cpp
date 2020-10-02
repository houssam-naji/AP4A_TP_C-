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

Server::Server(){}

Server::Server(float humidity_p, float temperature_p, int sound_p, bool light_p)
{
    m_humidity = humidity_p;
    m_temperature = temperature_p;
    m_sound = sound_p;
    m_light = light_p;
}

Server::~Server(){};

void Server::dataRcv(Humidity humidity_p, Temperature temperature_p, Sound sound_p, Light light_p)
{
    srand(time(0));

    humidity_p.aleaGenVal();                     /// Génération des données des capteurs de manière aléatoire et toute en même temps (pas encore de manière
    temperature_p.aleaGenVal();                  /// fréquentielle par un scheduler)
    sound_p.aleaGenVal();
    light_p.aleaGenVal();

    m_humidity = humidity_p.getData();           /// Affectation des données des capteurs dans les attributs de notre serveur
    m_temperature = temperature_p.getData();
    m_sound = sound_p.getSon();
    m_light = light_p.getLumiere();

    char reponse = ' ';

    while(reponse != 'O' && reponse != 'N')
    {
    cout << "Voulez-vous stocker les données renvoyées par les capteurs ? (O/N)" << endl; /// On demande à l'utilisateur si il veut stocker ces données
    cin >> reponse;
    cout << endl;
    }

    if (reponse == 'O')
    {
        logActivation = true;
    }
    else
    {
        logActivation = false;
    }

    reponse = ' ';

    while(reponse != 'O' && reponse != 'N')
    {
    cout << "Voulez-vous afficher les données renvoyées par les capteurs ? (O/N)" << endl; /// On demande à l'utilisateur si il souhaite afficher les données dans la console
    cin >> reponse;
    cout << endl;
    }

    if (reponse == 'O')
    {
        consolActivation = true;
    }
    else
    {
        consolActivation = false;
    }
}

void Server::consolWrite(ostream& flux_p)const
{
    if (consolActivation == true)
    {
        flux_p << m_humidity << "g/m³ ; " << m_sound << "dB ; " << m_temperature << "°C ; "; /// Si l'utilisateur a choisi d'afficher les données, les enregistre dans un flux de sortie
        if(m_light == true)
        {
            flux_p << "Lumière allumée";
        }
        else
        {
            flux_p << "Lumière éteinte";
        }
    }

}

void Server::fileWrite(ofstream& file_p)const
{
    if (logActivation == true)
    {
        file_p << m_humidity << " g/m³ ; " << m_sound << " dB ; " << m_temperature << "°C ; "; /// Si l'utilisateur a choisi de stocker les valeurs, les écris dans un fichier
        if(m_light == true)
        {
            file_p << "Lumière allumée";
        }
        else
        {
            file_p << "Lumière éteinte";
        }
    }
}

Server& Server::operator=(const Server&  server_p)
{
    if (&server_p!= this)
    {
        consolActivation = server_p.consolActivation;
        logActivation = server_p.logActivation;
        m_humidity = server_p.m_humidity;
        m_temperature = server_p.m_temperature;
        m_sound = server_p.m_sound;
        m_light = server_p.m_sound;
    }
    return *this;
}

ostream& operator<<(ostream& flux_p, Server const& serv_p)
{
    serv_p.consolWrite(flux_p);
    return flux_p;
}

ofstream& operator<<(ofstream& file_p, Server const & serv_p)
{
    serv_p.fileWrite(file_p);
    return file_p;
}
