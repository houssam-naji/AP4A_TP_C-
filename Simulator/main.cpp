/**
∗ @author Victor Mira
∗ @file main.cpp
∗ @date 04/10/2020
∗ @brief contient la fonction main()
*/

#include <iostream>
#include "Server.hpp"
#include <fstream>

using namespace std;

int main()
{   
    //déclarations des variables relatives aux tests
    /*
    Server server1;
    Server server2(1,2,3,4);
    ofstream flux ("Logs.txt");
    */

    //pour tester l'affichage dans la console et les fichiers de logs
    /*
    cout << "Server 1: " << endl << server1 << endl;
    cout << "Server 2: " << endl << server2 << endl;
    flux << "Server 2: " << endl << server2 << endl;
    */

    // pour tester la surchage de l'opérateur "="
    /*
    server1 = server2;
    cout << "Server 1 = Server 2" << endl << "/////////////////" << endl << "Server 1: " << endl << server1;
    */
    return 0;
}
