/*
@author Brancharel_Sébastien
@file Server.hpp
@date 04/10/2020
@brief Classe Server
*/

#ifndef SERVER_H
#define SERVER_H

/*
@class Server
@brief Classe Server
*/


class Server
{
	public:
		Server(); //Constructeur
		Server(Server const& server);
		~Server();
		void operator=(Server const& server1, Server const& server2);
		
		ostream operator<<(ostream &flux, Server const& server);
		ofstream operator<<(string const& fichier, Server const& server);
		
		void operator>>(Server& server);
		
		bool getConsolActivation() const;
		bool getLogActivation()const;
		
		void setConsolActivation(bool value);
		void setLogActivation(bool value);
			


		
		//void dataRcv(); //Il faut add Scheduler

		


	private:
		bool m_consolActivation;
		bool m_logActivation;
		//fileWrite(Type));
		//consolWrite(Type));
};
#endif //SERVER_H
