
/*
* @author Paul GOUBET
* @file Server.cpp
* @date 04/10/2020
* @brief
*/


#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "Server.hpp"

using namespace std;


// Surcharge de l'opérateur d'affectation égale
    Server& Server::operator=(const Server& server)
    {
        if (&server != this)
        {
            temperature = server.temperature;
            humidity = server.humidity;
            light = server.light;
            sound = server.sound;
            consolActivation = server.consolActivation;
            logActivation = server.logActivation;
        }
        return *this;
    }



// Surcharge de l'opérateur << pour les flux
     std::ostream& operator<<(std::ostream& consol, const Server& server)
    {
        server.m_consolWrite(consol);

        return consol;
    }


     std::ostream& operator<<(std::ostream& file, const Server& server)
    {
        server.m_consolWrite(file);

        return file;
    }



// Fonction pour écrire dans le fichier
void Server::m_fileWrite (std::ofstream& file) const
{
    if(Server::logActivation)
    {
        file << "sensor.getName()" << " " << "sensor.getData";
    }
}

// Fonction pour afficher le fichier dans la console
void Server::m_consolWrite(std::ostream& consol) const
{
    if(Server::consolActivation)
    {
        consol << "sensor.getName()" << " " << "sensor.getData()";
    }
}


void Server::m_dataRcv(Sensor sensors[3])
{
    sound = sensors[0];
	light = sensors[1];
	humidity = sensors[2];
	temperature = sensors[3];

	char answerF, answerC;

	while (std::toupper(answerF) != 'O' && std::toupper(answerF) != 'N')
    {
        cout << "Voulez-vous stocker les données ?" <<endl;
        cin >> answerF;
    }

    if(std::toupper == 'O')
    {
        Server::logActivation = true;
    }
    else
    {
        Server::logActivation = false;
    }


    while (std::toupper(answerC) != 'O' && std::toupper(answerC) != 'N')
    {
        cout << "Voulez-vous afficher les données ?" <<endl;
        cin >> answerC;
    }

    if(std::toupper == 'O')
    {
        Server::consolActivation = true;
    }
    else
    {
        Server::consolActivation = false;
    }
}
