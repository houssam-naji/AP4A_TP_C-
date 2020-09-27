/**
* @author Liu_Jiashu
* @file serveur.h
* @date 27/09/2020
* @premier version
*/

#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;

class Server {

public:
	Server() :Temperature(0), Humidity(0), Sound(0), Light(0) {}
	Server(const Server& server);
	virtual ~Server();
	void operator=(const Server& serv);
	friend ostream &operator<<(ofstream& osf, const Server& serv);
	friend ostream &operator<<(ostream& os, const Server& serv);
protected:
	float Temperature, Humidity;
	int Sound;
	bool Light;

};

ostream &operator<<(ofstream& osf,const Server& serv)
{
	osf.open("output.txt");
	osf << "Temperature=" << serv.Temperature << std::endl;
	osf << "Humidity=" << serv.Humidity << std::endl;
	osf << "Sound=" << serv.Sound << std::endl;
	osf << "Light=" << serv.Light << std::endl;
	osf.close();
	return osf;

}

ostream& operator<<(ostream& os, const Server& serv)
{
	os << "Temperature = " << serv.Temperature << std::endl;
	os << "Humidity = " << serv.Humidity << std::endl;
	os << "Sound = " << serv.Sound << std::endl;
	os << "Light = " << serv.Light << std::endl;
	return os;
}

Server::Server(const Server& server) {
	Temperature = server.Temperature;
	Humidity = server.Humidity;
	Sound = server.Sound;
	Light = server.Light;
}

void Server::operator=(const Server& serv)
{
	Temperature = serv.Temperature;
	Humidity = serv.Humidity;
	Sound = serv.Sound;
	Light = serv.Light;
}
Server::~Server() {}

#endif
