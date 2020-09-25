/**
 * @author rgracari
 * @file main.cpp
 * @date 25/09/220
 * @brief Fonction main,utilise principalement pour tester
 * @copyright MIT
 */

#include "Server.hpp"

int main()
{
    Server server1(true, false);
    Server server2(false, true);

    std::ofstream myFile;
    myFile.open("test.txt");
    myFile << server1;
    myFile.close();

    std::cout << server1;
    return 0;
}