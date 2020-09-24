/**
 * @author rgracari
 * @file Server.hpp
 * @date 24/09/220
 * @brief Description de la classe Server super!
 */

#ifndef SERVER_H
#define SERVER_H

class Server
{
public:
    Server();
    Server(const Server& otherServer);
    void operator=(const Server& otherServer);
    virtual ~Server();

private:
    bool m_consolActivation = false;
    bool m_logActivation = false;
};

#endif // SERVER_H