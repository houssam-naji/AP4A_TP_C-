#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
using namespace std;

class Server
{
public:
        //constructeur
        Server();

        //constructeur de recopie
        Server(const Server&);

        //destructeur
        ~Server();

        //methode pour obtenir valeur private de consolActivation
        bool getConsolActivation() const;

        //methode pour definir valeur de consolActivation
        void setConsolActivation(bool);

        //methode pour obtenir valeur private de logActivation
        bool getLogActivation() const;

        //methode pour definir valeur de logActivation
        void setLogActivation(bool);

        //surcharge =
        Server& operator=(const Server& S)
        {
          if(this!=&S)
          {
            this->consolActivation = S.consolActivation;
            this->logActivation = S.logActivation;
            return (*this);
          }
        }

        //Reception données
        //void dataRcv(Server);


private:
        bool consolActivation, logActivation;

        //Ecriture données dans un fichier de log
        //void fileWrite(Server);

        //Ecriture données dans la console
        //void consolWrite(Server);

};

//surcharge << vers console
std::ostream& operator<<(std::ostream &output, Server const& S);
//surcharge << vers fichier
std::ofstream& operator<<(std::ofstream &output, Server const& S);

#endif // SERVER_H
