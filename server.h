/*
∗ @JIN Yian
∗ @file server.hpp
∗ @date 26/09/2020
∗ @La classe "server" reçoit, stocke et affiche les donnes.
*/
#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED
#include<iostream>
#include<fstream>
using namespace std;

class server
{
private:
    float m_t,m_h,m_l,m_s;//les 4 parametres representent la temperature, l'humidite, la lumiere et les bruits

public:
/* ∗
∗ @La methode est pour copier le contenu d'un objet de la classe "server"
∗ @retour de la methode est une reference const de l'objet
∗ @parametre demande est une reference const
*/
    const server& operator=(const server&a);
/* ∗
∗ @La methode est pour afficher le contenu d'un objet de la classe "server" vers la console
∗ @retour de la methode est une reference de ostream
∗ @parametre demande est une reference de ostream et une reference de l'objet "server"
*/
    friend ostream& operator<<(ostream& out, const server& b);
/* ∗
∗ @La methode est pour afficher le contenu d'un objet de la classe "server" vers un fichier
∗ @retour de la methode est une reference de ofstream
∗ @parametre demande est une reference de ofstream et une reference de l'objet "server"
*/
    friend ofstream& operator<<(ofstream& outfile, const server& c);
};

#endif // SERVER_H_INCLUDED
