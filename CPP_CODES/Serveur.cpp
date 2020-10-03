#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Server {
double donnee; //mesures stockées

public:

Server(); //constructeur par défaut
Server(double d){donnee=d;} //constructeur paramétré
~Server(){} //Destructeur

    /*  Surchage des opérateurs */
    //surchage de l'opérateur =
    void operator=(const Server &n)
    {
        donnee=n.donnee;
    }

    // surcharge de l'operateur <<
    friend ostream& operator<<(ostream&,const Server&);
    // L'operateur << a ete declare friend pour lui permettre d'acceder aux donnees "private"
    // de la classe "Server".

};

ostream& operator<<(ostream& out, const Server& c) //définition de la méthode de surchage de <<
{
out << "Donnees: " << c.donnee << endl; //On passe l'objet < c> comme une constante
return out;
}

int main()
{
    //Exécution de l'opérateur<<
    Server c1();
    cout <<c1 << endl;

    ofstream Out("serveur.txt"); //Redirection de cout vers le fichier gitCours.txt
    streambuf* OldBuf = cout.rdbuf(Out.rdbuf());     //le streambuf est l'objet qui fait le lien entre le flux et ce vers quoi il lit / �crit).
                                                    // et pour acc�der au streambuf d'un flux il faut utiliser la fonction membre rdbuf
    cout << "Affichage dans le serveur \n" << c1<< endl;

    // Restauration du streambuf initial de cout (affichage sur la console)
    cout.rdbuf(OldBuf);


    return 0;
}
