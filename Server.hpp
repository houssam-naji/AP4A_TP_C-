/**
* @author mathieu LAGNY
* @file Server.hpp
* @date 15/09/2020
* @brief reçoit, stocke et affiche les données provenant des capteurs
*/

//
// Define guards
#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fcntl.h>
#include <fstream>

/**
* @class Server
* @brief
*/
class Server
{
public:
  Server();
  Server(const Server& server_p);
  ~Server()= default;;

  Server& operator=(const Server& server_p);

  /**
  * @brief surcharge de l'operateur  <<
  * @return retourne le flux avec les nouveaux messages des sensors
  * @param flux de sortie standard, serveur
  */
  std::ostream& operator<<(std::ostream& os_p, const Server& server_p);

  /**
  * @brief surcharge de l'operateur  <<
  * @return retourne le flux avec les nouveaux messages des sensors
  * @param flux de sortie fichier, serveur
  */
  std::ofstream& operator<<(std::ofstream& ofs_p, const Server& server_p);

private:
  bool m_consolActivation; /// indique si les donnees seront affichees dans la console
  bool m_logActivation; /// indique si les donnees sont stockees dans les logs.

  void fileWrite(std::ofstream& data_p) const;
  void consolWrite(std::ostream& data_p) const;
};

#endif // SERVER_H