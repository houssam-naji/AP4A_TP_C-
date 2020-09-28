/**
* @author Licata_Enzo
* @Server.h
* @date 28/09/2020
* @Classe Server Header
*/

#ifndef SERVER_H
#define SERVER_H
#include <iostream>

using namespace std;

class Server
{
    public :
        Server();
        Server(int nbrOfSensors, bool consolActivation, bool logActivation);
        Server(const Server&);
        ~Server();
        Server& operator=(const Server& server);

        void consolWrite();
        void fileWrite();
        void dataRcv();

    private :
        int m_nbrOfSensors;
        bool m_consolActivation, m_logActivation;

    protected :
};

ostream& operator<<(ostream& flux,int a);

#endif
