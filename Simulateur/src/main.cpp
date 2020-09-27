#include <iostream>
#include <fstream>
#include "../include/Server.hpp"

using namespace std;

int main()
{
    cout << "Le simulateur est pret ! \n" << endl;

    Server server; // cr�ation d'un objet Server

    cout << server; // appelle de la surchage de l'op�rateur << qui affiche dans la console

    ofstream myfile("log.txt", ios::app); // cr�ation ou ouverture du fichier / ios::app permet d'�crire � la fin du fichier sans effacer son contenu
    myfile << server; // appelle de la surchage de l'op�rateur << qui �crit dans un fichier
    myfile.close(); // fermeture du fichier

    return 0;
}
