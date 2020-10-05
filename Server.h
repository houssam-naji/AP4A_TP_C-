#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Server
{
    public :
        Server();
        Server(bool consolActivation, bool logActivation);
        Server(const Server&);
        ~Server();
        Server& operator=(const Server& server);
        ostream& operator<<(ostream &flux);
        ofstream& operator<<(ofstream &flux);
        void consoleWrite(ostream &flux);
        void fileWrite(ofstream &flux);

    private :
        bool consolActivation, logActivation;
};


#endif
