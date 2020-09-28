#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

class Server
{
public:
        //constructeur
        Server();

        //constructeur de recopie
        Server(const Server&);

        //destructeur
        ~Server();

        //surcharge =
        Server& operator=(const Server&);

        //surcharge << vers console
        friend std::ostream& operator<<(std::ostream &output, Server const& S);

        //surcharge << vers fichier
        friend std::ofstream& operator<<(std::ofstream &output, Server const& S);

        //Reception données
        //void dataRcv(Server);

        //Ecriture données dans un fichier de log
        //void fileWrite(Server);

        //Ecriture données dans la console
        //void consolWrite(Server);



private:
        bool consolActivation, logActivation;

};

#endif // SERVER_H
