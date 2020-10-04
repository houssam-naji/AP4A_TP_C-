/*
 * server.h
 *
 *  Created on: 4 oct. 2020
 *      Author: DOMINGUEZ Enzo
 */

#ifndef SERVER_HPP
#define SERVER_HPP

		class Server
		{
		public :
		// initialisation des variables/fonctions

			int getCount() ;
			bool m_ConsolActivation ();
			bool m_logActivation();
			Server(void);
			Server operator+(Server&, Server&);//operation arithmétique binaire // @suppress("Type cannot be resolved")
			~Server() { std::cout<<"Destruction\n";}
			Server operator=(Server&, Server&);
			Server operator>>(Server&, Server&); //cet opérator (>>) appliqué à un flux d'entrée est appelé opérateur d'extraction
			Server operator<<(int, int const&);// sortie
			void m_dataRcv(int, int const&);
			void m_fileWrite(int, int const&);
			void m_consolWrite(int, int const&);
		//changement des variable adéquat: A FAIRE

		private :
		int m_count ; ///< d e s c r i p t i f de l ’ a t t r i b u t
		};

#endif /* SERVER_HPP*/
