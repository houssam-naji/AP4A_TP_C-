/*
 * @author Paul DESANDES
 * @file Server.cpp
 * @date 27/09/2020
 * @brief
 */

#include "../include/Server.hpp"
#include <iostream>
#include <fstream>
#include <clocale>
#include <cctype>

using namespace std;

Server& Server::operator=(const Server& server)
{
	if (&server != this)
	{
		temperature = server.temperature;
		humidity = server.humidity;
		light = server.light;
		sound = server.sound;
		consolActivation = server.consolActivation;
		logActivation = server.logActivation;
	}

	return* this;
}

std::ostream& operator<<(std::ostream& console, const Server& server)
{
	server.m_consolWrite(console);

	return console;
}

std::ofstream& operator<<(std::ofstream& file, const Server& server)
{
	server.m_fileWrite(file);

	return file;
}

void Server::m_dataRcv(Sensor sensors[3])
{
	temperature = sensors[0];
	humidity = sensors[1];
	light = sensors[2];
	sound = sensors[3];

	char answer = '';

	while (std::toupper(answer) != 'O' && std::toupper(answer) != 'N')
	{
		cout << "Voulez-vous stocker les données dans un fichier ?" << endl;
		cin << answer;
	}

	if (std::toupper(answer) == 'O')
	{
		Server::logActivation = true;
	}
	else
	{
		Server::logActivation = false;
	}

	answer = '';

	while (std::toupper(answer) != 'O' && std::toupper(answer) != 'N')
		{
			cout << "Voulez-vous afficher les données dans la console ?" << endl;
			cin << answer;
		}

		if (std::toupper(answer) == 'O')
		{
			Server::consolActivation = true;
		}
		else
		{
			Server::consolActivation = false;
		}
}

void Server::m_fileWrite(std::ofstream& file) const
{
	if (Server::logActivation)
	{
		file << sensor.getName() << " : " << sensor.getData();
	}
}

void Server::m_consolWrite(std::ostream& console) const
{
	if (Server::consolActivation)
	{
		console << sensor.getName() << " : " << sensor.getData();
	}
}


