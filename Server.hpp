#ifndef SERVER_H
#define SERVER_H

#include <iostream>
using namespace std;

class Server
{
public:
  //constructeur
  Server();
  //constructeur de recopie
  Server(const Server& autreObjet);
  //destructeur
  ~Server();

private:

  //surcharge =
  //surcharge << vers console
  //surcharge << vers fichier
}

#endif // SERVER_H
