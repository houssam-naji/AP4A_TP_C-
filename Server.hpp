#ifndef SERVER_H
#define SERVER_H

#include <iostream>

/**
* @author Boukhtam Mohamed
* @file Server.hpp
* @date 22/09/2020
* @brief La classe "Server" permet de recevoir, de stocker et d'afficher les données envoyées provenant des capteurs de la cabine de l'avion.
*/
class Server
{
private:
  bool m_consolActivation;
  bool m_logActivation;
  char *m_fileName; //Chemin complet du fichier dans lequel seront loggé les données

  void fileWrite();

  void consolWrite();

public:

  Server()
  {
    m_consolActivation = false, m_logActivation = false;
    m_fileName = NULL;
  };

  Server(const Server &server_p);

  ~Server();

  Server &operator=(const Server &server_p);

  void operator<<(char *data_p) const;

  void dataRcv();

  void setMConsolActivation(bool mConsolActivation);

  void setMLogActivation(bool mLogActivation);

  void setMFileName(char *mFileName);
};


#endif //SERVER_H