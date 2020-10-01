/**
 * @ Aur�lien ETESSE
 * @ Server.hpp
 * @ 27/09/2020
 * @ Permet de recevoir, de stocker et f'afficher les donn�es envoy�s provenant des capteurs de la cabine de l'avion
 */

#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include <iostream>
#include <fstream>

class Server
{
public:
    /**
     * @ Constructeur par d�faut
     */
    Server();
     /**
      * @ Constructeur par recopie
      */
    Server(const Server& server);
     /**
      * @ Descruteur
      */
    ~Server();
     /**
      * @ Operateur d'affectation
      */
    Server& operator=(const Server& server);
      /**
      * @ Redirection vers la console
      */
    ostream& operator<<(ostream &flux, Server const& server);

      /**
      * @ Redirection vers un fichier
      */
    ofstream& operator<<(ofstream &flux, Server const& server);

private:
    bool m_consolActivation;
    bool m_logActivation;
};

#endif // SERVER_H_INCLUDED
