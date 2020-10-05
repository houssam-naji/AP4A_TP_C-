#include <iostream>
#include <fstream>
using namespace std;

#include "Server.hpp"
#include "Sensor.hpp"

int main()
{
  std::ofstream outputFile("output.txt", ios::out | ios::trunc);

  Server A;
  Sensor B;
  A.dataRcv(B); //Reception des données de B dans A

  cout << "Appel de setConsolActivation(): \n";
  A.setConsolActivation(1);
  cout << "Appel de setLogActivation(): \n";
  A.setLogActivation(1);

  cout << "Test getConsolActivation: " << A.getConsolActivation() <<"\n";
  cout << "Test getLogActivation: " << A.getLogActivation() <<"\n";


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
