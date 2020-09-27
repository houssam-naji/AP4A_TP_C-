/**
 * @author Xu_Chenfan
 * @file MaClasse.h
 * @date 26/9/2020
 * @brief Description de la classe , son objectif
 */

 //
 // Define guards
#ifndef MACLASSE_H
#define MACLASSE_H
#include <fstream>

/**
 * @class Server
 * @brief Description de la classe
 */
class Server
{
    public:
        //Definition de la methode
        //...
        /**
         * @brief Description de la methode
         * @return retour de la methode
         * @param parametre - parametre demande
         */
        Server();
        Server(const Server& server);
        virtual ~Server();
        void operator=(const Server& D);
        friend std::ostream &operator<<( std::ostream &output, const Server &D );
        friend std::ofstream &operator<<(std::ofstream & outfileput, const Server &D);

    protected:

    private:
        float Temperature,Humidity;
        int Sound;
        bool Light;


};

#endif // MACLASSE_H
