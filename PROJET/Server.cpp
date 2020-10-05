/**
 * @author  Aurélien GOUY
 * @file  Server.cpp
 * @date 05/10/2020
 * @brief  Classe Server : a pour but de simuler un serveur qui va recevoir des données de différents capteurs (température, humidité, lumière et son) puis les enregistrer dans un fichier et/ou les afficher dans une console
*/

//Guards
#include <iostream>
#include "Server.hpp"


using namespace std;


//---------------CONSTRUCTEUR---------------/
/**
 * @brief Constructeur par recopie de la classe Server : permet de copier les attributs de cette classe dans un nouveau serveur
 * @param server_p Le serveur à copier dans le nouveau serveur
 */
Server::Server(const Server& serv_p)
{
    this -> m_consolWriteActivation = serv_p.m_consolWriteActivation;
    this -> m_fileWriteActivation = serv_p.m_fileWriteActivation;
    this -> m_temperature = serv_p.m_temperature;
    this -> m_humidity = serv_p.m_humidity;
    this -> m_light = serv_p.m_light;
    this -> m_sound = serv_p.m_sound;
};




//---------------SURCHARGE DES OPÉRATEURS---------------/
/**
 * @brief Surcharge de l'opérateur d'affectation : permet d'affecter les valeurs de server_p à un autre serveur
 * @return Renvoie une référence vers le serveur donneur d'attributs
 * @param server_p Le serveur donneur d'attributs pour dans le nouveau serveur
 */
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

/**
 * @brief Surcharge de l'opérateur << pour les fichiers : permet d'écrire dans un fichier grâce à l'opérateur <<
 * @return Renvoie le fichier dans lequel on va écrire
 * @param file Le fichier dans lequel on va écrire
 * @param server_p Le serveur par le biais dulequel on va écrire dans le fichier
 */
ofstream& operator<<(ofstream& file, const Server& server_p)
{
    server_p.fileWrite(file);
    return file;
}

/**
 * @brief Surcharge de l'opérateur << pour la console : permet d'afficher dans une console grâce à l'opérateur <<
 * @return Renvoie la console qui va servir à afficher ce que l'on veut affciher
 * @param consol La console qui va servir à afficher ce que l'on veut affciher
 * @param server_p Le serveur par le biais dulequel on va afficher
 */
ostream& operator<<(ostream& consol, const Server& server_p)
{
    server_p.consolWrite(consol);
    return consol;
}




//---------------MÉTHODES---------------/
/**
 * @brief Méthode dataRcv : méthode qui permet de recevoir les données des capteurs transmises par le Scheduler et de les enregistrer dans les attributs de la classe Server
 * @param temperature_p Paramètre température, donnée température passée par le Scheduler
 * @param humidity_p Paramètre humidité, donnée humidité passée par le Scheduler
 * @param light_p Paramètre lumière, donnée lumière passée par le Scheduler
 * @param sound_p Paramètre son, donnée son passée par le Scheduler
 */
void Server::dataRcv(float temperature_p, float humidity_p, float light_p, float sound_p)
{
    m_temperature = temperature_p;
    m_humidity = humidity_p;
    m_light = light_p;
    m_sound = sound_p;
}

/**
 * @brief Méthode pour écrire dans un fichier
 * @param file Le fichier dans lequel on va écrire
 */
void Server::fileWrite(std::ofstream& file)
{
    if (Server::m_fileWriteActivation)
    {
        file << "";
    }
}

/**
 * @brief Méthode pour afficher dans une console
 * @param consol La console dans laquel on va afficher
 */
void Server::consolWrite(std::ostream& consol)
{
        if (Server::m_consolWriteActivation)
    {
        consol << "";
    }
}

