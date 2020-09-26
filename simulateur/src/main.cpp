#include <iostream>
#include "../headers/Server.hpp"

using namespace std;

int main()
{
    Server server, server2(true,false),server3(server2);
    cout << server << "\n";
    server = server2;
    cout << server << "\n";
    cout << server2 << "\n";
    cout << server3 << "\n";
    return 0;
}