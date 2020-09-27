/**
 * @author mcoulmeau
 * @file MaClasse.hpp
 * @date 28/09/2020
 * @brief Operator= and << overload
 */

#ifndef MACLASSE_H
#define MACLASSE_H

#include <iostream>
#include <fstream>

/**
 * @class MaClasse
 * @brief Operator= and << overload
 */
class MaClasse
{
private:
    int m_valeur;///< Valeur
public:
    //Constructeur par default
    MaClasse();

    //Constructeur par recopie
    MaClasse(const MaClasse&);

    //Destructeur
    ~MaClasse();

    /**
     * @brief Operator= overload
     * @param objet
     * @return MaClasse&
     */
    MaClasse& operator=(const MaClasse& objet);

    /**
     * @brief Operator<< overload (output to console)
     * @param objet
     * @return MaClasse&
     */
    friend std::ostream& operator<<(std::ostream &output, MaClasse const& objet);

    /**
     * @brief Operator<< overload (output to file)
     * @param objet
     * @return MaClasse&
     */
    friend std::ofstream& operator<<(std::ofstream &output, MaClasse const& objet);

    /**
     * @brief getValeur
     * @return int
     */
    int getValeur() const;
};

#endif //MACLASSE_H