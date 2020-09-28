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
        int nbrOfSensors;
        bool consolActivation, logActivation;

    protected :
};

ostream& operator<<(ostream& flux,int a);

#endif
