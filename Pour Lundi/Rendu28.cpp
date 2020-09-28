/**
 * @author Antoine MOYSE
 * @file Rendu28.cpp
 * @date 28/09/2020
 * @brief main dans lequel on test le bon fonctionnement des fonctions
 */

#include "ClasseServer.h"
#include <ostream>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  Server MonServer;
  Server MonServer2;
  cout << "Valeur premier serveur \n";
  MonServer.setTemperature(100);
  MonServer.setHumidity(100);
  MonServer.setSound(20);
  MonServer.setLight(1);
  cout << MonServer;

  cout << "Pour le 2eme serveur \n";
  MonServer2.setTemperature(10);
  MonServer2.setHumidity(10);
  MonServer2.setSound(200);
  MonServer2.setLight(0);
  cout << MonServer2;

  MonServer2=MonServer;
  cout << MonServer2;

  std::ofstream toFile("bonjour.txt");
  toFile<<"Server 1 : " << MonServer << "\nServer 2 : " << MonServer2;
  return 0;
}
