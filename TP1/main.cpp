#include"Server.cpp"
#include<iostream>
#include<fstream>
#include<ostream>
#include<string>

using namespace std;

int main()
{
    cout << "Bienvenue! \n" << endl;

    Server s; // création d'un objet Server
    Server s2(true,false); // création d'un autre objet Server avec paramètres afin de tester la surchage de l'opérateur "="

    cout << "Le premier serveur : " <<s<<'\n'<<endl; // appelle de la surchage de l'opérateur "<<" qui affiche dans la console
    cout << "Le deuxième serveur avant l'affectation, s2 : " << s2<<'\n'<<endl; // appelle de la surchage de l'opérateur "<<" qui affiche dans la console le 2eme objet avant l'affectation
    s2.operator=(s); // appelle de la surchage de l'opérateur "=" qui affecte un objet de type "Server" à un autre objet du meme type
    cout << "Le deuxième serveur après l'affectation, s2 : " << s2<<'\n'<<endl; // appelle de la surchage de l'opérateur "<<" qui affiche dans la console le 2eme objet après l'affectation
    ofstream myfile("log.txt", ios::app); // création, ouverture du fichier
    myfile << s; // appelle de la surchage de l'opérateur "<<" qui écrit dans un fichier les données du serveur
    myfile.close(); // fermeture du fichier

    return 0;
}
