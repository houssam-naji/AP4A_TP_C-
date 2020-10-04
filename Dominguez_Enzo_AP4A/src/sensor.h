/*
 * sensor.h
 *
 *  Created on: 4 oct. 2020
 *      Author: DOMINGUEZ Enzo
 */

#ifndef SENSOR_HPP
#define SENSOR_HPP

		class Sensor
		{
		public :

			int getCount ( ) const ;
			Sensor(void);
			Sensor operator+(Sensor&, Sensor&);//operation arithmétique binaire
			Sensor operator+(int, int const&);
			~Sensor() { std::cout << "Destruction \n";}
			int getData();
			virtual void aleaGenVal();

		private :
		int m_count ;
		};




#endif /* SENSOR_HPP */
