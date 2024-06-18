#include<iostream>
using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
  int num1 = -4;
  float num2 = 3.1416;
  double num3 = 123.456;

  mostrarAbs(num1);
  mostrarAbs(num2);
  mostrarAbs(num3);
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
  if(numero < 0){
    numero = numero * -1;
  }

  cout<<"El valor absoluto es: "<<numero<<endl;
}
