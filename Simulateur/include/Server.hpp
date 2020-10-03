/*
 * @author Paul DESANDES
 * @file Server.hpp
 * @date 27/09/2020
 * @brief
 */


//
// Define guards
#ifndef SERVER_HPP_
#define SERVER_HPP_

#include <iostream>
#include <fstream>
#include "../include/Sensor.hpp"

/*
 * @class Server
 * @brief
 */
class Server
{
public:
	// Definition de la forme canonique
	Server();
	Server(const Server& server);
	~Server ();

	Server& operator=(const Server& server);
	friend std::ostream& operator<<(std::ostream& console, const Server& server);
	friend std::ofstream& operator<<(std::ofstream& file, const Server& server);

	void m_dataRcv(Sensor sensors[3]);


private:
	bool consolActivation;
	bool logActivation;
	float temperature;
	float humidity;
	float sound;
	float light;
	void m_fileWrite(std::ofstream& file) const;
	void m_consolWrite(std::ostream& console) const;

};



#endif /* SERVER_HPP_ */
