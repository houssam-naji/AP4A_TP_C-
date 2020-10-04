/∗ ∗
∗ @author Julien Audoux
∗ @file Server.hpp
∗ @date 26/09/2020
∗ @ a simple class aiming to use the operatoroverloading
∗/

// Define guards
#ifndef SERVER_H
#define SERVER_H

class Server {
	public:
		Server();
		Server(int value);
		Server(const Server& a);
		int getNumber();
		Server& operator=(const Server& a);
		friend std::ostream& operator<<(std::ostream &flux, Server const& a);
		friend std::ostream& operator<<(std::ofstream &flux, Server const& a);
		~Server();
	private:
		int m_number;
}

#endif // SERVER_H
