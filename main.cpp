#include <iostream>
#include <fstream>
using namespace std;

#include "Server.hpp"

int main()
{
  std::ofstream toFile("output.txt");
  Server A();

  //ecriture console
  std::cout<<"Server A: "<<A<<"\n";

  //ecriture fichier
  toFile<<"Server A: "<<A<<"\n";

  return 0;
}
