#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
  pedirNotas();
  mostrarNotas();

  delete[] calif;
}

void pedirNotas(){
  cout<<"Digite numero de calificaciones del alumno: ";
  cin>>numCalif;

  calif = new int[numCalif];

  for(int i=0;i<numCalif;i++){
    cout<<"Ingrese una nota: "; cin>>calif[i];
  }
}

void mostrarNotas(){
  cout<<"\nMostrando notas del usuario\n";
  for(int i=0;i<numCalif;i++){
    cout<<calif[i]<<endl;
  }
}