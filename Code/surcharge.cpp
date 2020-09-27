

Sensor operator=(Sensor const& sensor1, Sensor const& sensor2){
	
		
	if(sensor1 !=NULL & sensor2!=NULL & (sensor1.getType()==sensor2.getType()) )
	{
		switch(sensor1.getTypeNumber()){
			case 1: //float case : temperature, 
				return (sensor1.getData() == sensor2.getData());
			break;
			
			case 2: //float case : humidity
				return (sensor1.getData() == sensor2.getData());
			break;
			
			case 3: //integer and linear sound case : sound
				return (sensor1.getData() == sensor2.getData());
			break;
			
			
			case 4: //boolean case : light
				return (sensor1.getData() == sensor2.getData());
			
			break;
			
			default:
						
		}
		
	}
	return false;
	
	
}

ostream& operator<<(ostream &flux, Sensor const& sensor){
	
		switch(sensor.getTypeNumber()){
			case 1: //float case : temperature
				flux << "temperature: " <<sensor.getData()<<end1;
			break;
			
			case 2: //float case : humidity
				flux << "humidity: " <<sensor.getData()<<end1;
			break;
			
			case 3: //integer and linear sound case : sound
				flux << "sound: " <<sensor.getData()<<end1;
			break;
			
			
			case 4: //boolean case : light
				flux << "light: " <<sensor.getData()<<end1;
			
			break;
			
			default:
						
		}
	return flux;
}

void operator<<string const fichier, Sensor const sensor ){
	
	ofstream monFlux(fichier.c_str()/*, ios::app*/);
	if(monFlux){
		switch(sensor.getTypeNumber()){
				case 1: //float case : temperature
					monFlux << "temperature: " <<sensor.getData()<<end1;
				break;
				
				case 2: //float case : humidity
					monFlux << "humidity: " <<sensor.getData()<<end1;
				break;
				
				case 3: //integer and linear sound case : sound
					monFlux << "sound: " <<sensor.getData()<<end1;
				break;
				
				
				case 4: //boolean case : light
					monFlux << "light: " <<sensor.getData()<<end1;
				
				break;
				
				default:
							
		}
	}
	else{
		cout << "Error"<<end1;
	}
}





