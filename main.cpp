#include <iostream>
#include <fstream>
#include "Server.hpp"

using namespace std;

int main()
{
    ofstream fichier("/home/haudran/AP4A_TP_C++/Relevé_Données.txt"); /// Déclaration du fichier qui va réceptionner les données du capteur et rename en "fichier" pour simplifier l'utilisation

    Humidity h;         /// Déclaration de nos capteurs
    Temperature t;
    Sound s;
    Light l;

    float a=0, b=0;     /// Valeurs test
    int c=0;
    bool d=0;

    Server boeing(a,b,c,d); /** On initialise notre serveur avec nos variables égales à 0 pour notifier après de la réussite de la fonction rcvData
                                et par conséquent la réussite de l'implémentation de nos classes Capteurs (Méthodes + Attributs) et de l'accessibilité
                                des données via le getter getData(). **/

    boeing.dataRcv(h,t,s,l); /// On affecte les données de nos capteurs aux attributs de boeing


    cout << boeing << endl; /// On affiche boeing dans la console via la surcharge de << si les données ont bien été reçues (consolActivation==true)


    if(fichier)
    {
        fichier << boeing << endl; /// On stocke les valeurs de boeing dans un fichier si les données ont bien été reçues et que le fichier de réception existe
    }
    else
    {
        cout <<" ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}
