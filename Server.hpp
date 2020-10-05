#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
#include "Sensor.hpp"

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

        //surcharge << vers console
        friend std::ostream& operator<<(std::ostream &output, Server const& S);
        //surcharge << vers fichier
        friend std::ofstream& operator<<(std::ofstream &output, Server const& S);

        //Reception données
        void dataRcv(Sensor);


private:
        bool consolActivation, logActivation;
        int dataReceived;

        //Ecriture données dans un fichier de log
        void fileWrite(std::ofstream&) const;

        //Ecriture données dans la console
        void consolWrite(std::ostream&) const;

};

#endif // SERVER_H
