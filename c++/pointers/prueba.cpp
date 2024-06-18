#include<iostream>

using namespace std;

int main(){
	int numero = 4;
	int *puntero = &numero;

	cout<<"Numero: "<<*puntero<<endl;
	cout<<"Direccion: "<<&puntero<<endl;
	
}