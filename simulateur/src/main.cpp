#include <iostream>
#include "../headers/Server.hpp"

using namespace std;

int main()
{
    Server server, server2(true,false),server3(server2);
    cout << server;
    server = server2;
    cout << server;
    cout << server2;
    cout << server3;
    ofstream log;
    log.open ("log/log.txt");
    log << server;
    log.close();
}