#include <iostream>
#include "MonObjet.h"

int main()
{
    std::ofstream toFile("myfile.txt");
    MonObjet m(1,3);
    toFile << "Mon Objet 1 : " << m;
    MonObjet m2(0,0);
    m2 = m;
    std::cout << m2;
    return 0;
}
