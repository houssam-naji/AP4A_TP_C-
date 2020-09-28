/**
*@ Ahmed EL MOUMINE
*@ Fichier server.hpp
*@ date 20.09.2020
*@ cette classe doit recevoir, stocker et afficher les donnees des capteurs
*/
#ifndef SERVER_H
#define SERVER_H
class Server
{
public:
	void Server();
	void Server(Server S_p);
	~Server();
	void operator=(Server S_p);
	void operator>>(type C_p);
	void operator>>(type F_p);
	void dataRcv(type X_p)

private:
	bool s_consoleActuvation;
	bool s_logActuvation;
	void fileWrite(type X_p);
	void consoleWrite(type X_p);
}
#endif