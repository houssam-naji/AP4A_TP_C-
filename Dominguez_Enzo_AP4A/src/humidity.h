/*
 * humidity.h
 *
 *  Created on: 4 oct. 2020
 *      Author: DOMINGUEZ Enzo
 */

#ifndef HUMIDITY_HPP
#define HUMIDITY_HPP

		class Humidity : public Sensor
		{
		public :

			int aleaGenVal();
		//	float aleaGenVal();

		private :
		int m_count ;
		};




#endif /* HUMIDITY_HPP */
