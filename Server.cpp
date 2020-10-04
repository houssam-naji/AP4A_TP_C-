/**
* @author Boukhtam Mohamed
* @file Server.hpp
* @date 22/09/2020
* @brief La classe "Server" permet de recevoir, de stocker et d'afficher les données envoyées provenant des capteurs de la cabine de l'avion.
*/

#include <iostream>
#include <fstream>
#include "Server.hpp"


Server::Server(const Server &server_p) {
  this->m_logActivation = server_p.m_logActivation;
  this->m_consolActivation = server_p.m_consolActivation;
}

Server::~Server() {}

Server &Server::operator=(const Server &server_p) {
  if (this != &server_p) {
    this->m_logActivation = server_p.m_logActivation;
    this->m_consolActivation = server_p.m_consolActivation;
  }
  return (*this);
}

void Server::setMConsolActivation(bool mConsolActivation) {
  m_consolActivation = mConsolActivation;
}

void Server::setMLogActivation(bool mLogActivation) {
  m_logActivation = mLogActivation;
}

/** @name opérateur <<
 * @brief L'opérateur "<<" prend un paramètre : Une chaîne de caractère
 * Le serveur enverra au fichier adéquate (grâce au membre fileName) ou affichera la donnée en fonction de l'activation de l'affichage et du log
 * (Fonction susceptible d'être modifié)
 */
void Server::operator<<(char* data_p) const {
  if (this->m_logActivation && this->m_consolActivation) {
    //On écrit dans le fichier de log et on affiche également dans la console la donnée
    std::cout << data_p; //Console
    //Fichier

  } else if (this->m_logActivation) {
    //On écrit seulement dans le fichier de log la donnée

    //Récupération du nom du fichier et des données
    std::ofstream file;
    file.open(m_fileName);
    file << data_p;
  } else if (this->m_consolActivation) {
    //On ne fait que afficher dans la console la donnée
    std::cout << data_p; //Console
  }
}

void Server::dataRcv() {

}

void Server::fileWrite() {

}

void Server::consolWrite() {

}

void Server::setMFileName(char *mFileName)
{
  m_fileName = mFileName;
}












