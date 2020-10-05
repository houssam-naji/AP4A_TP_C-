#include <iostream>
#include <fstream>
#include "Server.hpp"
#include "Server.cpp" // Du à des problèmes de compilation avec VScode, je dois inclure Server.cpp pour l'instant mais à l'avenir
// tous les cpp compileront comme il faut.
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