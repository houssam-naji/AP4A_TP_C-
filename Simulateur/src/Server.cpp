/**
 *
 * @author RICHARD Antoine
 * @file Server.cpp
 * @date 24/09/2020
 * @brief La classe Server permet de recevoir, de stocker et d'afficher les données
 *        envoyés provenant des capteurs de la cabine de l'avion.
 *
 */



#include "../include/Server.hpp"

/**
*
* @brief Constructeur par défaut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param Aucun paramètre.
*
*/
Server::Server() : m_consolActivation(true), m_logActivation(true)
{

}

/**
*
* @brief Constructeur par copie de la classe.
* @return Aucun retour.
* @param server_p : Référence sur l'objet à copier.
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
* @param serverSource : Référence sur l'objet dont le contenu va être copié.
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
* @brief Ecrit dans la console.
* @return void
* @param output_p: Référence sur un objet ostream.
*
*/
void Server::consolWrite(std::ostream& output_p) const
{
    output_p << "-- CONSOLE : donnees des capteurs: consolActivation = " << this->m_consolActivation << ", logActivation = " << this->m_logActivation << std::endl;
}

/**
*
* @brief Surcharge de l'operateur <<.
*        Redirige vers la console.
* @return output_p: Référence sur un objet ostream.
* @param output_p: Référence sur un objet ostream.
* @param server_p: Objet de la classe Server pour lequel on veut afficher les données.
*
*/
std::ostream& operator<<(std::ostream& output_p, const Server& server_p)
{
    server_p.consolWrite(output_p);
    return output_p;
}

/**
*
* @brief Ecrit dans un fichier.
* @return void
* @param file_p: Référence sur un objet ofstream.
*
*/
void Server::fileWrite(std::ofstream& file_p) const
{
    file_p << "-- LOG : donnees des capteurs: consolActivation = " << this->m_consolActivation << ", logActivation = " << this->m_logActivation << std::endl;
}

/**
*
* @brief Surcharge de l'operateur <<.
*        Redirige vers un fichier.
* @return file_p: Référence sur un objet ofstream.
* @param file_p: Référence sur un objet ofstream.
* @param server_p: Objet de la classe Server pour lequel on veut logger les données.
*
*/
std::ofstream& operator<<(std::ofstream& file_p, const Server& server_p)
{
    server_p.fileWrite(file_p);
    return file_p;
}

/**
*
* @brief déstructeur de la classe
* @return aucun retour
* @param aucun paramètre.
*
*/
Server::~Server()
{

}
