#include <iostream>
#include <fstream>
#include "Serveur.hpp"

using namespace std;
int main ()
{
	Serveur test;
	Serveur test2 = Serveur(true,true);
	test = test2;
	std::cout <<test2;
	std::ofstream file;
	file.open("soundlog.txt",std::ios::app);
	file << test2;
	return 0;


}
