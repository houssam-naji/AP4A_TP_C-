//
// Created by louis on 21/09/20.
//

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>


using namespace std;

class Server
{
    
public:

    Server();
    Server(Server const &serv);
    virtual ~Server();

    //operateurs
    Server& operator=(const Server&);
    friend ostream& operator<<(ostream&, const Server&);
    friend ofstream& operator<<(ofstream&, const Server&);

private:

    void fileWrite(int);
    void consolWrite(int);
    bool m_consolActivation;
    bool m_logActivation;


};

#endif //SERVER_H
