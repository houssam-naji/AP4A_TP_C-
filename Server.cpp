#include <Server.h>
#include <fstream>
#include <string>
#include <iostream>

Server::Server() : m_consolActivation(1), m_logActivation(1), m_temperature(0), m_humidity(0), m_lights(0) , m_sound(0)
{

}
Server::Server(bool consolActivation, bool logActivation) : m_consolActivation(consolActivation), m_logActivation(logActivation), m_temperature(0), m_humidity(0), m_lights(0) , m_sound(0)
{

}
Server::Server(Server const& b) : m_consolActivation(b.m_consolActivation), m_logActivation(b.logActivation)
{

}
Server::~Server()
{
	//Rien car aucune allocution dynamique dans la classe Server
}
void afficher(std::ostream &flux) const//Permet de prendre les attributs de la classe Server car le cout de les connait pas
{
	flux << m_temperature << "°C " << m_humidity << "% " << m_lights << "  " << m_sound << "Db"
}
void afficherLog(std::ofstream &flux) const//Permet de prendre les attributs de la classe Server car le fichier de les connait pas
{
	flux << m_temperature << "°C " << m_humidity << "% " << m_lights << "  " << m_sound << "Db"
}
Server operator=(Server const& b)//surcharge operateur = 
{
	m_consolActivation=b.m_consolActivation;
	m_logActivation=b.m_logActivation;
	return Server;
}
ostream &operator<<(ostream &flux, Server const& server) //surcharge operateur << si l'objet flux (cout) est de la classe ostream
{
	server.afficher(flux);
	return flux
}
ofstream &operator<<(ofstream &flux, Server const& server)//surcharge operateur << si l'objet flux (le chemin du fichier) est de la classe ofstream
{
	server.afficherLog(flux);
	return flux
}
