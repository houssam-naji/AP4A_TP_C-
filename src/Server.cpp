/**
 * @author Grégori MIGNEROT
 * @file Server.cpp
 * @date 27/09/2020
 * @brief Traitement, stockage et affichage des données en provenance des capteurs
 */

#include "Server.hpp"

Server::Server(){

}

Server::Server(const Server& copied){
  // Copie des mesures
  m_mesures.clear();
  for (std::vector<Mesure>::iterator it = copied.m_mesures.begin(); it != copied.m_mesures.end(); it++){
    m_mesures.push_back(*it);
  }
}

Server::~Server(){
  m_mesures.clear();
}

Server& Server::operator=(const Server& copied){
  // Copie des mesures
  m_mesures.clear();
  for (std::vector<Mesure>::iterator it = copied.m_mesures.begin(); it != copied.m_mesures.end(); it++){
    m_mesures.push_back(*it);
  }
  return *this;
}

std::ofstream& operator<<(std::ofstream& stream, const Server& server){
  for (std::vector<Mesure>::iterator it = m_mesures.begin(); it != m_mesures.end(); it++){
    stream << it->date << " " << it->mesure << " " << it->valeur << std::endl;
  }
  return stream;
}

std::ostream& operator>>(std::ostream& stream, const Server& server){
  for (std::vector<Mesure>::iterator it = m_mesures.begin(); it != m_mesures.end(); it++){
    stream << it->date << " " << it->mesure << " : " << it->valeur << std::endl;
  }
  return stream;
}
