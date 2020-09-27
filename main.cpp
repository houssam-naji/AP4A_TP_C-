#include <iostream>
#include "header.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;



int main()
{
    const char* vt="Bonjour kkdvsdgdiuyfguyfyuer ! ";
    Header *h = new Header(vt);
    h->print();
    FILE* fichier = NULL;

    fichier = fopen("danielTest.txt", "w");

    if (fichier != NULL)
    {
        fputs(vt, fichier); // Écriture du caractère A
        fclose(fichier);
    }
  // std::cout << "surcharge de l'opperateur reussi" << std::endl;
   return 0;
}
