#include <iostream>

#include "Server.hpp"
using namespace std;

int main(void)
{
	//test construction surchage de l'opérateur = et de la méthode send.
	Server serv = Server("test.log");
	Server serv2 = serv;
	
	serv.send("i'm a test","Test");
	serv2.send("from another","2");
	serv.send("still logging","Log");
	
	// test de la surchage de l'opérateur <<
	cout<<serv;
	
	fstream file;
	file.open("test.txt",ios::out);
	file<<serv;
	file.close();
	
	return 0;
}
