//============================================================================
// Name        : testoui.cpp
// Author      : moi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "ClasseServer.h"
#include <ostream>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	Server MonServer;	//Cr�ation des Serveur que l'on va manipuler
	Server MonServer2;
	cout << "Valeur premier serveur \n";
	MonServer.setTemperature(100);
	MonServer.setHumidity(100);		//Initialisation manuelle des valeurs du premier serveur
	MonServer.setSound(20);
	MonServer.setLight(1);
	cout << MonServer;				//Affichage des valeurs du premier serveur
	cout << "Pour le 2eme serveur \n";
	MonServer2.setTemperature(10);
	MonServer2.setHumidity(10);		//Initialisation manuelle des valeurs du deuxi�me serveur
	MonServer2.setSound(200);
	MonServer2.setLight(0);
	cout << MonServer2;				//Affichage des valeurs du deuxi�me serveur
	cout << "Hello ZAWORLDO \n";
	MonServer2=MonServer;			//Affectation des valeurs du premier serveur vers le deuxi�me
	cout << MonServer2;				//Affichage des valeurs du deuxi�me serveur pour v�rifier que les nouvelles valeurs ont bien �t� affect�es

	return 0;
}
