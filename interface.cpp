#include <iostream>

using namespace std;

#include <string>

bool YesNoQuestion(string question_p)
{
  char answer;
  cout << question_p << " (Y/n) : ";
  cin >> answer;
  while(answer!='Y'&&answer!='N'&&answer!='y'&&answer!='n'){
    cout << "Incorrect answer, please try again : "<<endl;
    cin >> answer;
  }
  return (answer=='Y'||answer=='y');
}