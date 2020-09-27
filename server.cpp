#include <iostream>
#include "server.h"

inline std::ostream& operator<< (std::ostream & out, const server & server)
{
    out << "bool consolActivation : " << server.consolActivation << "\nbool logActivation : " << server.logActivation << "\n" ;
    return out;
}

inline std::ofstream& operator<< (std::ofstream & out, const server & server)
{
    out << "bool consolActivation" << server.consolActivation << "bool logActivation" << server.logActivation ;
    return out;
}

server& server::operator =(const server & server)
{
    consolActivation = server.consolActivation;
    logActivation = server.logActivation;
    return *this;
}

int main()
{
    class server Test, server;
    std::ostream consol;
    std::ofstream file;
    Test.consolActivation = true;
    Test.logActivation = true;

    server.operator=(Test);
    Test.operator<<(consol, Test);
    Test.operator<<(file, Test);

}