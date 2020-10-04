/*
* @author Paul GOUBET
* @file Server.cpp
* @date 04/10/2020
* @brief
*/

#ifndef SERVER_HPP_INCLUDED
#define SERVER_HPP_INCLUDED
#include "Server.hpp"

class Server

{

public:

	Server();
	Server(const Server& server);
	~Server();
	Server& operator=(const Server& server);

	void m_fileWrite(std::ofstream& file) const;
	void m_consolWrite(std::ostream& console) const;
	friend std::ostream& operator<<(std::ostream& console, const Server& server);
	friend std::ofstream& operator<<(std::ofstream& file, const Server& server);
	void m_dataRcv(Sensor sensors[3]);


private:

	float temperature;
	float humidity;
	float sound;
	float light;
	bool consolActivation;
	bool logActivation;


};

#endif // SERVER_HPP_INCLUDED
