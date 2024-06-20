#include<iostream>
using namespace std;

// Prototype
void intercambio(float *, float *);

int main(){
  float num1 = 20.8, num2 = 6.78;

  cout<<"Primer numero: "<<num1<<endl;
  cout<<"Segundo numero: "<<num2<<endl;

  // Be careful to send the address with &
  intercambio(&num1, &num2);

  cout<<"Primer numero ahora es: "<<num1<<endl;
  cout<<"Segundo numero ahora es: "<<num2<<endl;
}

void intercambio(float *dirNum1, float *dirNum2){
  float aux;

  aux = *dirNum1;
  *dirNum1 = *dirNum2;
  *dirNum2 = aux;
}