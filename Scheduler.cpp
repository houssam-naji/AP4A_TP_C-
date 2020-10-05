#include "Scheduler.hpp"
#include "Server.hpp"

#include <iostream>
#include "interface.hpp"

using namespace std;
using namespace test;

Scheduler::Scheduler(){
  m_frequency = 0;
  serv.toggleConsole(YesNoQuestion("Enable console data output?"));
  serv.toggleLog(YesNoQuestion("Enable data logging into file?"));
}

Scheduler::~Scheduler(){}

void Scheduler::setFrequency(){
  cout << "Set scheduler frequency (in Hertz -- i.e. a frequency of 2 means 2 data transfers per second) - Frequency must be >= "<<MIN_FREQ<<" and <= "<<MAX_FREQ<<" : "; //TODO: validate type of entries
  int userFreq = 0;
  cin >> userFreq;
  while (userFreq<MIN_FREQ || userFreq >MAX_FREQ)
  {
    cout << "Frequency out of range, pleaser try again : ";
    cin >> userFreq;
  }
  this->m_frequency = userFreq;
}