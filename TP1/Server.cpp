/**
* @author BOUNNIT
* @file Server.cpp
* @date 27/09/2020
* @
*/

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include "Server.hpp"

using namespace std;

Server::Server()
{
  this->m_consolActivation = false;
  this->m_logActivation = false;
}

Server::Server(bool cons,bool log)
{
  this->m_consolActivation = cons;
  this->m_logActivation = log;

}

Server::Server(const Server& s)
{
    if (this != &s)
    {
      this->m_consolActivation = s.m_consolActivation;
      this->m_logActivation = s.m_logActivation;
    }
}

Server::~Server()
{

}

void Server::afficherServer()
{
    cout << "Consol Activation : " << m_consolActivation << endl;
    cout << "Log Activation : " << m_logActivation << endl;

}

Server& Server::operator=(const Server& s)
{
    if (this != &s)
    {
      this->m_consolActivation = s.m_consolActivation;
      this->m_logActivation = s.m_logActivation;
    }

    return *this;
}

/**
*
* @brief Surcharge de l'operateur "<<" qui redirige vers la console.
* @return cons: Référence sur un objet ostream.
* @param cons: Référence sur un objet ostream.
* @param server: Objet de la classe Server pour lequel on veut afficher les données.
*
*/
std::ostream& operator<<(std::ostream& cons, const Server& s)
{
    cons << "Données des capteurs : consolActivation = " << s.m_consolActivation << ", logActivation = " << s.m_logActivation << std::endl ;
    return cons;
}

/**
*
* @brief Surcharge de l'operateur "<<" qui redirige vers un fichier.
* @return file: Référence sur un objet ofstream.
* @param file: Référence sur un objet ofstream.
* @param s: Objet de la classe Server pour lequel on veut logger les données.
*
*/
std::ofstream& operator<<(std::ofstream& file, const Server& s)
{

    file << "Données des capteurs : consolActivation = " << s.m_consolActivation << ", logActivation = " << s.m_logActivation << std::endl;
    return file;
}
