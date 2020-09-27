/**
 *
 * @author RICHARD Antoine
 * @file Server.cpp
 * @date 24/09/2020
 * @brief La classe Server permet de recevoir, de stocker et d'afficher les donn�es
 *        envoy�s provenant des capteurs de la cabine de l'avion.
 *
 */


#include "../include/Server.hpp"

/**
*
* @brief Constructeur par d�faut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param Aucun param�tre.
*
*/
Server::Server() : m_consolActivation(true), m_logActivation(true)
{

}

/**
*
* @brief Constructeur par copie de la classe.
* @return Aucun retour.
* @param server : R�f�rence sur l'objet � copier.
*
*/
Server::Server(const Server& server)
{
    this->m_consolActivation = server.m_consolActivation;
    this->m_logActivation = server.m_logActivation;

}

/**
*
* @brief Surcharge de l'operateur d'affectation.
*        Copie le contenu d'un objet dans l'objet courrant.
* @return *this L'objet appelant.
* @param serverSource : R�f�rence sur l'objet dont le contenu va �tre copi�.
*
*/
Server& Server::operator=(const Server& serverSource)
{
    this->m_consolActivation = serverSource.m_consolActivation;
    this->m_logActivation = serverSource.m_logActivation;
    return *this;

}

/**
*
* @brief Surcharge de l'operateur <<.
*        Redirige vers la console.
* @return output: R�f�rence sur un objet ostream.
* @param output: R�f�rence sur un objet ostream.
* @param server: Objet de la classe Server pour lequel on veut afficher les donn�es.
*
*/
std::ostream& operator<<(std::ostream& output, const Server& server)
{
    output << "-- CONSOLE : donnees des capteurs: consolActivation = " << server.m_consolActivation << ", logActivation = " << server.m_logActivation << std::endl ;
    return output;
}

/**
*
* @brief Surcharge de l'operateur <<.
*        Redirige vers un fichier.
* @return file: R�f�rence sur un objet ofstream.
* @param file: R�f�rence sur un objet ofstream.
* @param server: Objet de la classe Server pour lequel on veut logger les donn�es.
*
*/
std::ofstream& operator<<(std::ofstream& file, const Server& server)
{

    file << "-- LOG : donnees des capteurs: consolActivation = " << server.m_consolActivation << ", logActivation = " << server.m_logActivation << std::endl;
    return file;
}

/**
*
* @brief d�structeur de la classe
* @return aucun retour
* @param aucun param�tre.
*
*/
Server::~Server()
{

}
