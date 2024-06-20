#include<iostream>
using namespace std;

int main(){
  int numeros[] = {1,2,3,4,5};
  int *dir_numeros;

  // We do not need to use: dir_numeros = &numeros[0]; Just:
  dir_numeros = numeros;

  for(int i = 0;i<5;i++){
    cout<<"\nElemento del vector: ["<<i<<"] es: "<<*dir_numeros<<endl;
    cout<<"Posicion de memoria: "<<numeros[i]<<" es: "<<dir_numeros++<<endl;
  }

}