/**
* @author pierre_clerc
* @file main.cpp
* @date 05 / 10 / 2020
* @brief Le main permet de tout simplement lancer la fonction main.
* @bug Un #include est nécessaire pour les fichiers en .cpp, mais cela sera corrigé prochainement.
*/

#include <iostream>
#include <fstream>
#include "Server.hpp"
#include "Server.cpp"
using namespace std;

int main()
{
  Server a;
  Server b(30, 100, 10, true);
  Server c;
  c = b;
  cout << c;

  string const nomFichier("log.csv");
  ofstream fluxFichier(nomFichier.c_str());
  
  if(fluxFichier) // Ecriture dans le fichier
  {
    fluxFichier << c;
  }

  return 0;
}