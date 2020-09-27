#include "Server.hpp"

using namespace std;

//==//==Constructeurs==//==//

Server::Server(string filename_p)
{
	m_filename=filename_p;
	m_file.open(filename_p,ios::out);
	
}

Server::Server(const Server& server_p)
{
	m_filename=server_p.m_filename;
	m_file.open(m_filename,ios::out);
}

//==//==Destructeur==//==//

Server::~Server()
{
	m_file.close();
}


//==//==Méthode==//==//

void Server::send(string msg_p,string sensorType_p)
{
	string log = "[" + sensorType_p + "]" + msg_p;
	cout<<log<<endl;
	
	if (m_file.is_open())
	{
		m_file<<log<<endl;
		
	} else 
		{
		m_file.open(m_filename,ios::out);
		
		if (m_file.is_open())
		{
			m_file<<log<<endl;
			
		} else 
		{
			cerr<<"Erreur while trying to log into file : "<<m_filename<<" : Could not open file !\nlog: "<<log<<endl;
			
		}
			
	}
}

//==//==Opérateur surcharger==//==//

ostream& operator<<( ostream& flux_p , Server const& server_p)
{
    flux_p<<"Server Class writing logs to "<< server_p.getFilename() <<endl;
    if (server_p.isLogFileOpen())
    {
    	flux_p<<"log file currently open"<<endl;
    	
    } else 
    {
    	flux_p<<"log file currently closed"<<endl;
    	
    }
    return flux_p;
}

Server& Server::operator=(const Server& serv_p)
{
	if (this != &serv_p)
	{
		m_filename = serv_p.getFilename();
		m_file.open(m_filename,ios::out);
	}
	
	return *this;	
}

//==//==Getter==//==//

string Server::getFilename() const
{
	return m_filename;
}

bool Server::isLogFileOpen() const
{
	return m_file.is_open();
}
