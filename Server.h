#ifndef Server_H
#define Server_H

class Server
{
public :

//Attributs

	int m_temperature;
	int m_humidity;
	int m_light;
	int m_sound;
	//Methode
	Server(); //Constructeur par défaut
	Server(bool consolActivation, bool logActivation);
	Server(Server const& b);//Constructeur de recopie
	~Server();//Destructeur
	//Surcharge = et <<
	Server operator=(Server const& b);
	ostream &operator<<(ostream &flux, Server const& server);
	ostream &operator<<(ofstream &flux, Server const& server);

	void afficher(std::ostream &flux) const;
	void afficherLog(std::ofstream &flux) const;

	void dataRcv();
	void fileWrite(int temperature, int humidity, int light, int sound);
	void consolWrite(int temperature, int humidity, int light, int sound);
private :
//Attributs
	bool m_consolActivation;
	bool m_logActivation; 
	int m_temperature;
	int m_humidity;
	int m_light;
	int m_sound;
};
#endif

