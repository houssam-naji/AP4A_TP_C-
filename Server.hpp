
#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

using namespace std;


class Server
{
public:
	
    Server();

    Server(const Server& server);

    Server(bool consolActivation, bool logActivation);

    ~Server();

    Server& operator=(const Server& server);

    friend ostream& operator<<(ostream &flux, Server const& server);

    friend ofstream& operator<<(ofstream &flux, Server const& server);

    void consolWrite(ostream &flux) const;

    void fileWrite(ostream &flux) const;
    

private:

    bool m_consolActivation;
    bool m_logActivation;
};

#endif //SERVER_H

