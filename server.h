#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED
#include <iostream>

using namespace std;

class Server
{
private:
    bool consolActivation;
    bool logActivation;
    void fileWrite(ofstream &tofile);
    void consolWrite(ostream &tocons);

public:
    Server();
    Server(const Server& server);
    void operator=(const Server &s);
    friend ostream &operator<<(ostream &tocons, const Server &s);
    friend ofstream &operator<<(ofstream &tofile, const Server &s);
    ~Server();


};




Server::Server()
{
    consolActivation=0;
    logActivation=0;
}


Server::operator=(Server &s)
{
    consolActivation=server.consolActivation;
    logActivation=server.logActivation;
}


Server::ostream &operator<<(ostream &tocons, const Server &s)
{
    s.consolWrite(toconsol);
    return toconsol;
}


Server::ofstream &operator<<(ofstream &tofile, const Server &s)
{
    s.consolWrite(tofile);
    return tofile;
}




Server::~Server(){}


#endif // SERVER_H_INCLUDED
