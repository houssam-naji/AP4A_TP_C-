/*
@author Brancharel_Sébastien
@file Server.cpp
@date 04/10/2020
@brief Classe Server

*/


#include "Server.hpp"

Server::Server() : m_consolActivation(false),m_logActivation(false)
{

}

Server::Server(Server const& autre): m_consolActivation(autre.m_consolActivation), m_logActivation(autre.m_logActivation)
{

}

Server::~Server()
{

}

void::operator=(Server const& server1, Server const& server2){
	
	server1.setConsolActivation(server2.getConsolActivation());
	server1.setLogActivation(server2.getLogActivation());
	
}

//On écrit dans la console
ostream::operator<<(ostream &flux, Server const& server){
	
	flux << "ConsolActivation: " << server.getConsolActivation() << "LogActivation: " << server.getLogActivation() << endl;
	
	return flux;
	
}

//On écrit dans un fichier
ofstream::operator<<(string const& fichier, Server const& server){
	
	ofstream monFlux(fichier.c_str(), ios::app); //ios::app permet d'écrire à la fin du fichier, et non de l'écraser
	if(monFlux)
	{
		monFlux << "ConsolActivation: " << server.getConsolActivation() << "LogActivation: " << server.getLogActivation() << endl;
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier "<<endl;
	}
	return monFlux;
	
}

//On lit dans la console
void::operator>>(Server& server){
	
	cout << "ConsolActivation : true or false" << endl;
	bool value;
	cin >> value;
	server.setConsolActivation(value);
	cout << "LogActivation : true or false" << endl;
	cin >> value;
	server.setLogActivation(value);
	
}

//On lit dans un fichier
ifstream::operator>>(string const& fichier, Server const& server){
	
	ofstream monFlux(fichier.c_str(), ios::app); //ios::app permet d'écrire à la fin du fichier, et non de l'écraser
	if(monFlux)
	{
		monFlux << "ConsolActivation: " << server.getConsolActivation() << "LogActivation: " << server.getLogActivation() << endl;
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier "<<endl;
	}
	return monFlux;
	
}




bool Server::getConsolActivation() const
{
	return m_consolActivation;
}

bool Server::getLogActivation() const
{
	return m_logActivation;
}

void setConsolActivation(bool value)
{
	m_consolActivation(value);
}

void setLogActivation(bool value);
{
	m_logActivation(value);
}
