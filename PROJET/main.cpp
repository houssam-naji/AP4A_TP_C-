/**
 * @author  Aurélien GOUY
 * @file  main.cpp
 * @date 05/10/2020
 * @brief  Fonction main du projet : fonction principale
*/

//Guards
#include <iostream>
#include "Server.hpp"


using namespace std;


int main()
{
    char answerStock, answerPrint;

    //Demande enregistrement des données
    do
    {
        cout << "Voulez-vous stocker les données dans un fichier ?" << endl;
    } while (toupper(answerStock) != 'O'  &&  toupper(answerStock)!= 'N');

    if (toupper(answerStock) == 'O')
    {
        m_fileWriteActivation = true;
    }
        else
        {
            m_fileWriteActivation = false;
        }
    Server::fileWrite();



    //Demande affichage des données
    do
    {
        cout << "Voulez-vous afficher les données dans une console ?" << endl;
    } while (toupper(answerPrint) != 'O'  &&  toupper(answerPrint)!= 'N');

    if (toupper(answerPrint) == 'O')
    {
        m_consolWriteActivation = true;
    }
        else
        {
            m_consolWriteActivation = false;
        }
    Server::consolWrite();


    return 0;
}