#include <iostream>
#include <fstream>
#include "Scheduler.hpp"

using namespace std;
using namespace streamOverload;

int main()
{
  Scheduler sched;
  int nbSensors[4]; //number of sensors of each type to deal with, in the following order : temperature, humidity, light, sound

  sched.setFrequency();
  cout << "Set number of sensors in the airplane : " << endl;
  cout << "- Temperature : ";
  cin >> nbSensors[0];
  cout << "- Humidity : ";
  cin >> nbSensors[1];
  cout << "- Light : ";
  cin >> nbSensors[2];
  cout << "- Sound : ";
  cin >> nbSensors[3];

  sched.processData();

  return 0;
}