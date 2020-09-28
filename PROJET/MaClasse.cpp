#include <utility>
#include "MaClasse.hpp"



Server::Server(const Server& param_rhs)   //Constructeur de recopie
{
    this -> m_consolActivation = param_rhs.m_consolActivation;
    this -> m_logActivation = param_rhs.m_logActivation;
};

Server Server::operator=(const Server& param_A)
{
    class {Temp(param_A)};
    swap(Temp, *this);
    return *this;
}