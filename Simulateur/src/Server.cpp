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
* @param server_p : R�f�rence sur l'objet � copier.
*
*/
Server::Server(const Server& server_p)
{
    this->m_consolActivation = server_p.m_consolActivation;
    this->m_logActivation = server_p.m_logActivation;

}

/**
*
* @brief Surcharge de l'operateur d'affectation.
*        Copie le contenu d'un objet dans l'objet courrant.
* @return *this L'objet appelant.
* @param serverSource : R�f�rence sur l'objet dont le contenu va �tre copi�.
*
*/
Server& Server::operator=(const Server& server_p)
{
    this->m_consolActivation = server_p.m_consolActivation;
    this->m_logActivation = server_p.m_logActivation;
    return *this;

}

/**
*
* @brief Surcharge de l'operateur <<.
*        Redirige vers la console.
* @return output_p: R�f�rence sur un objet ostream.
* @param output_p: R�f�rence sur un objet ostream.
* @param server_p: Objet de la classe Server pour lequel on veut afficher les donn�es.
*
*/
std::ostream& operator<<(std::ostream& output_p, const Server& server_p)
{
    output_p << "-- CONSOLE : donnees des capteurs: consolActivation = " << server_p.m_consolActivation << ", logActivation = " << server_p.m_logActivation << std::endl ;
    return output_p;
}

/**
*
* @brief Surcharge de l'operateur <<.
*        Redirige vers un fichier.
* @return file_p: R�f�rence sur un objet ofstream.
* @param file_p: R�f�rence sur un objet ofstream.
* @param server_p: Objet de la classe Server pour lequel on veut logger les donn�es.
*
*/
std::ofstream& operator<<(std::ofstream& file_p, const Server& server_p)
{

    file_p << "-- LOG : donnees des capteurs: consolActivation = " << server_p.m_consolActivation << ", logActivation = " << server_p.m_logActivation << std::endl;
    return file_p;
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
