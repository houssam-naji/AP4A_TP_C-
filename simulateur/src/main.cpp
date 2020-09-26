#include <iostream>
#include "../headers/Server.hpp"

using namespace std;

int main()
{
    Server server, server2(true,false),server3(server2);
    cout << "Hello World\n" << endl;
    return 0;
}