#include <iostream>
#include <fstream>
#include "Server.hpp"

using namespace std;

int main()
{
    cout << "Le simulateur est pret ! \n" << endl;

    Server server; // création d'un objet Server

    cout << server; // appelle de la surchage de l'opérateur << qui affiche dans la console

    ofstream myfile("log.txt", ios::app); // création ou ouverture du fichier / ios::app permet d'écrire à la fin du fichier sans effacer son contenu
    myfile << server; // appelle de la surchage de l'opérateur << qui écrit dans un fichier
    myfile.close(); // fermeture du fichier

    return 0;
}
