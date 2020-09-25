/**
 * @author rgracari
 * @file Server.hpp
 * @date 24/09/220
 * @brief Description de la classe Server super!
 */

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

class Server
{
public:
    Server();
    Server(bool consoleActivation, bool logActivation);
    Server(const Server& otherServer);
    void operator=(const Server& otherServer);
    friend std::ostream& operator<<(std::ostream& os, const Server& server);
    friend std::ofstream& operator<<(std::ofstream& of, const Server& server);
    virtual ~Server();

private:
    bool m_consolActivation;
    bool m_logActivation;
};

#endif // SERVER_H