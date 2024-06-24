#include<iostream>

using namespace std;

const float FREEZE = 32.0;          //Freezing Point of Water (Farenheit)
const float BOIL = 212.0;           //Boiling Point of Water (Farenheit)

int main(){
  float avg;                        //Holds average

  cout<<"Water freezes at "<<FREEZE<<" grades"<<endl;
  cout<<"Water boils at "<<BOIL<<" grades"<<endl;

  avg = FREEZE+BOIL;
  avg = avg/2.0;                    //Must be the same type (float)

  cout<<"Halfway between is "<<avg<<" grades"<<endl;

  return 0;
}