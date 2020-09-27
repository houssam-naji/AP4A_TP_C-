/**
 * @author mcoulmeau
 * @file MaClasse.cpp
 * @date 28/09/2020
 * @brief Operator= and << overload
 */

#include "MaClasse.h"
#include <iostream>
#include <fstream>

//Constructeur par default
MaClasse::MaClasse(){
    this->m_valeur=0;
}

//Constructeur par recopie
MaClasse::MaClasse(const MaClasse& objet){
    this->m_valeur=objet.m_valeur;
}

//Destructeur
MaClasse::~MaClasse(){
}

//Surcharge de l'opérateur d'affectation
MaClasse& MaClasse::operator=(const MaClasse& objet){
    if(this!=&objet){
        this->m_valeur=objet.m_valeur;
        return(*this);
    }
}

std::ostream& operator<<(std::ostream &output, MaClasse const& objet) {
    output << objet.getValeur()<<"\n";
    return output;
}

std::ofstream& operator<<(std::ofstream &output, MaClasse const& objet) {
    output << objet.getValeur()<<"\n";
    return output;
}

int MaClasse::getValeur() const {
    return this->m_valeur;
}

int main(){
    MaClasse objet_1;
    MaClasse objet_2(objet_1);
    std::cout<<objet_1;
    std::ofstream toFile("output.txt");
    toFile<<objet_2;
    return 0;
}