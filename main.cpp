#include <iostream>
#include <fstream>
#include "Server.hpp"

using namespace std;

int main()
{
    ofstream fichier("/home/haudran/AP4A_TP_C++/Relevé_Données.txt");

    float a=0.0,b=1.0;
    int c=2;
    bool d=true;

    Sensor redAlert(a,b,c,d);

    Server boeing(redAlert);

    cout << boeing << endl;

    if(fichier)
    {
        fichier << boeing << endl;
    }
    else
    {
        cout <<" ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}
