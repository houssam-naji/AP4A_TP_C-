//
// Created by louis on 21/09/20.
//

#ifndef MAIN_H
#define MAIN_H

#include "Server.hpp"
#include "Server.cpp"
#include <iostream>
#include <fstream>



using namespace std;

int main()
{
    Server a,b;
    a=b;
    Server* c = new Server(a);
    cout << a << endl;

    ofstream fichier;
    fichier.open("mesures.log");
    fichier << a << endl;
    fichier.close();
    
    return 0;
}

#endif