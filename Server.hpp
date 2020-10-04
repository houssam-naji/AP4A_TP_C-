
#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include <iostream>
#include <fstream>

class Server
{
public:
    Server();
    
    Server(const Server& server);

    ~Server();

    Server& operator=(const Server& server);

    ostream& operator<<(ostream &flux, Server const& server);

    ofstream& operator<<(ofstream &flux, Server const& server);

private:
    bool m_consolActivation;
    bool m_logActivation;
};

#endif // SERVER_H_INCLUDED
