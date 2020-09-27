#include <iostream>
#include <fstream>
#include <ostream>

class server
{
    public : 
    bool consolActivation;
    bool logActivation;

    server& operator =(const server& server);

    friend std::ostream& operator<< (std::ostream& out, const server& server);
    friend std::ofstream& operator<< (std::ofstream& out, const server& server);
};

