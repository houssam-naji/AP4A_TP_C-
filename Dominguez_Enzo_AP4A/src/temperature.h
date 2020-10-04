/*
 * temperature.h
 *
 *  Created on: 4 oct. 2020
 *      Author: DOMINGUEZ Enzo
 */

#ifndef TEMPERATURE_HPP
#define TEMPERATURE_HPP


		class Temperature : public Sensor
		{
		public :

			int aleaGenVal();
			//	float aleaGenVal();

		private :
		int m_count ;
		};



#endif /* TEMPERATURE_HPP */
