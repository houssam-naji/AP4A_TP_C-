/** @author Allane CARON
 *
 * @file Server.cpp
 * @date 03/10/2020
 * @brief la classe Server à pour but de récupérer les données provenant des capteurs, de les rediriger vers la console et vers des fichiers log
 *
 */

#include "Server.h"
#include <iostream>

using namespace std;

    //forme canonique
Server::Server()
{
    m_consolActivation = true;
    m_logActivation = true;
    m_donneesTemp=0;
}

Server::~Server()
{
}

Server::Server(const bool& consolActivation_p, const bool& logActivation_p)
{
    m_consolActivation = consolActivation_p;
    m_logActivation = logActivation_p;
    m_donneesTemp=0;
}

Server::Server(const Server& server_p)
{
    m_consolActivation = server_p.m_consolActivation;
    m_logActivation = server_p.m_logActivation;
    m_donneesTemp=server_p.m_donneesTemp;
}

Server Server::operator=(const Server& server_p)
{
    m_consolActivation = server_p.m_consolActivation;
    m_logActivation = server_p.m_logActivation;
    return *this;
}

void Server::consolWrite(int typeCapteur_p)
{
    string t_nomCapteur[4]={"HUMIDITY","SOUND","BRIGHT","TEMPERATURE"};

    cout << t_nomCapteur[typeCapteur_p] << " : " << m_donneesTemp << endl;


}
ostream& operator<<(ostream& out_p, const Server& server_p)
{
    out_p << server_p.m_donneesTemp << endl;
    return out_p;
}


