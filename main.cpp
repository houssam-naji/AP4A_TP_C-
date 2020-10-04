#include<iostream>
#include <fstream>
#include<string>
#include "Server.h"



using namespace std;

int main()
{
    ofstream fichier("/hassan/Desktop/AP4A/Donnee.txt");
	
	/******************variable**********************/
	// creation de 2 Server
	Server server_1(true,false);
	Server server_2(false,true);
	

	/******************affichage**********************/
	cout << "---------1 er Server----------" << endl;
	//server_1.afficherServer(); //affichage normal
	cout<<server_1;

	cout << "---------2 eme Server---------" << endl;
	//server_2.afficherServer(); //affichage normal
	cout<<server_2;

	
	/******************affectation**********************/
 	server_1 = server_2;
    cout << "\n******************************" << endl;
    cout << "        affectation" << endl;
    cout << "\n1 er Server = 2 eme Server\n" << endl;
    cout << "******************************\n\n" << endl;
    /****************************************/
    
   // cout<<server_1; // redirection consol
    

    /******************affichage**********************/
    cout << "---------1 er Server----------" << endl;
	//server_1.afficherServer(); //affichage normal
	cout<<server_1;
	cout << "---------2 eme Server---------" << endl;
	//server_2.afficherServer(); //affichage normal
    cout<<server_2;

    fichier<<"server 1" << server_1; // redirection fichier
  return 0;
}
 
