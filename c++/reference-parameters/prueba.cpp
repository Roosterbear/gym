#include<iostream>
using namespace std;

void new_value(int&, int&);

int main(){
  int num1, num2;

  cout<<"Digite 2 numeros: ";
  cin>>num1>>num2;

  new_value(num1,num2);

  cout<<"El primer NUEVO valor es: "<<num1<<endl;
  cout<<"El segundo NUEVO valor es: "<<num2<<endl;

}

void new_value(int& xnum, int&ynum){
  cout<<"El primer valor es: "<<xnum<<endl;
  cout<<"El segundo valor es: "<<ynum<<endl;

  // We can change the values:
  xnum = 123;
  ynum = 456;
}
