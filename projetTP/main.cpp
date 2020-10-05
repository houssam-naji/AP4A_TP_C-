#include "Server.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  Server num1 = Server();
  Server num2 = Server();

  //Test de la Surcharge de l'affectation
  num1 = num2;

  //string const dataFile("/home/bouclesdort/AP4A_TP_C-/projetTP/data.txt");
  //ofstream file(dataFile.c_str());
  //file << num1 << endl;

  // Teste de la Surcharge << redirection vers un fichier
  ofstream file;
  file.open("data.txt");
  file << num1 << endl;
  file.close();

  // Teste de la Surcharge << redirection vers las console
  cout << num1 << endl;

  return 0;
}
