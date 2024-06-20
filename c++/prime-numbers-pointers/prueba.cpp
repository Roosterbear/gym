#include<iostream>
using namespace std;

// PRIME NUMBERS
int main(){
  int numero, *dir_numero, cont = 0;

  cout<<"Digite un numero: "; cin>>numero;
  dir_numero = &numero;

  // is a prime number?
  for(int i = 1;i <= *dir_numero;i++){    
    if(*dir_numero%i == 0){
      cont++;
    }
  }

  if(cont>2){
    cout<<"El numero "<<*dir_numero<<" NO es primo"<<endl;
    cout<<"Posicion en memoria: "<<dir_numero<<endl;
  }else{
    cout<<"El numero "<<*dir_numero<<" SI es primo"<<endl;
    cout<<"Posicion en memoria: "<<dir_numero<<endl;
  }

}