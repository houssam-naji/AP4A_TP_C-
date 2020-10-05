#include "Scheduler.hpp"
#include "Server.hpp"

#include <iostream>
#include <fstream>
#include "interface.hpp"

using namespace std;
using namespace streamOverload;

Scheduler::Scheduler()
{
  m_frequency = 0;
  serv.toggleConsole(YesNoQuestion("Enable console data output?"));
  serv.toggleLog(YesNoQuestion("Enable data logging into file?"));
}

Scheduler::~Scheduler() {}

void Scheduler::setFrequency()
{
  cout << "Set scheduler frequency (in Hertz -- i.e. a frequency of 2 means 2 data transfers per second) - Frequency must be >= " << MIN_FREQ << " and <= " << MAX_FREQ << " : "; //TODO: validate type of entries
  int userFreq = 0;
  cin >> userFreq;
  while (userFreq < MIN_FREQ || userFreq > MAX_FREQ)
  {
    cout << "Frequency out of range, pleaser try again : ";
    cin >> userFreq;
  }
  this->m_frequency = userFreq;
}

void Scheduler::processData()
{
  int incomingData = test.getData();
  serv.dataRcv(incomingData, 'T');
  cout << serv;

  ofstream myFile("data.txt"); //TODO: append new line in file instead of replacing
  myFile << serv;
  myFile.close();

  //TODO: encapsulate instructions above into loop below
  /* while(true)
  {
    float delay = this->m_frequency
  } */
}