#include <iostream>
#include <fstream>
using namespace std;

#include "Server.hpp"

int main()
{
  std::ofstream outputFile("output.txt", ios::out | ios::trunc);

  class Server A;

  A.setConsolActivation(1);
  A.setLogActivation(0);

  //ecriture console
  std::cout<<A, "\n";

  //si outputFile bien créé
  if(outputFile)
  {
    //ecriture fichier
    outputFile<<A, "\n";
    outputFile.close();
  }
  else
  {
    std::cout<<"Erreur de création de outputFile, ecriture fichier impossible\n";
  }


  return 0;
}
