/**
* @author ChenYingqiu
* @file Server.h
* @date 24/09/2020
* @brief Description de la class, son objectif
*/

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

class Server
{
public:
	Server();
	Server(const Server& s);
	virtual ~Server() {}; //Destructeur
	Server operator =(const Server& a);
	friend std::ofstream operator <<(std::ofstream &cout,const Server &b);
	friend std::ofstream operator <<(std::ofstream &cout,const Server &c);
	//void dataRcv(Type type);
private:
	bool consolActivation;
	bool logActivation;
	//void fileWrite(Type type);
	//void consolWrite(Type type);
};

//Constructeur
Server::Server()
{
	consolActivation = 0;
	logActivation = 0;
}

//Copier le constructeur
Server::Server(const Server& s)
{
	this->consolActivation = s.consolActivation;
	this->logActivation = s.logActivation;
}

//Copier le contenu d'un objet dans l'objet courant
Server Server::operator =(const Server& a)
{
	if (&a != this)
	{
		this->consolActivation = a.consolActivation;
		this->logActivation = a.logActivation;
	}
	return *this;
}

//Redirection vers la console
std::ofstream operator <<(std::ofstream &cout, const Server &b)
{
	cout <<"la console:\nconsolActivation" << b.consolActivation << " logActivation" << b.logActivation;
	return cout;
}

//Redirection vers un fichier
std::ofstream operator <<(std::ofstream &cout,const Server &c)
{
	cout << "le fichier:\nconsolActivation" << c.consolActivation<< " logActivation" <<c.logActivation;
	return cout;
}

#endif SERVER_H
