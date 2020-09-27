#include <iostream>
#include <fstream>
#include "Serveur.hpp"

using namespace std;
int main ()
{
	Serveur test;
	Serveur test2 = Serveur(true,true);
	test = test2;
	test2 << "ToPrintInConsole\n";
	test2 << 43;
	return 0;


}
