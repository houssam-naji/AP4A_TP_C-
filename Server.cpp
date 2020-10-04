/**
* @author mathieu LAGNY
* @file Server.cpp
* @date 15/09/2020
* @brief reçoit, stocke et affiche les données provenant des capteurs
*/

#include "Server.hpp"

Server::Server()
{
  m_consolActivation = true;
  m_logActivation = false;
}

Server::Server(const Server& server_p)
{
  this->m_consolActivation = server_p.m_consolActivation;
  this->m_logActivation = server_p.m_logActivation;
}

Server& Server::operator=(const Server &server_p)
{
  this->m_consolActivation = server_p.m_consolActivation;
  this->m_logActivation = server_p.m_logActivation;
  return* this;
}

void Server::fileWrite(std::ofstream& data_p) const
{

}

void Server::consolWrite(std::ostream& data_p) const
{

}

std::ostream& Server::operator<<(std::ostream& os_p, const Server& server_p)
{
  server_p.consolWrite(os_p);
  return os_p;
}

std::ofstream& Server::operator<<(std::ofstream& ofs_p, const Server& server_p)
{
  server_p.fileWrite(ofs_p);
  return ofs_p;
}
