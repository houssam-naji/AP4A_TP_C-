/**
* @author Xu_Huamao
* @file MaClass.h
* @date 27/09/2020
* @brief Description de la classe , son objectif
*/
#ifndef maclass_h
#define maclass_h
#include <fstream>
/**
* @class Server
* @brief Description de la classe
*/
class Server {
    
public:
    Server();
    Server(const Server& server); //?
    virtual ~Server();
    void operator=(const Server& S);
    friend std::ostream &operator<<( std::ostream &output, const Server &S );
    friend std::ofstream &operator<<( std::ofstream & outputfile, const Server &S);
    protected:

    private:
        float Temperature,Humidity;
        int Sound;
        bool Light;

};
#endif /* maclass_h */
