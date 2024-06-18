#include<iostream>

using namespace std;

int main(){
	int numeros[] = {5,4,6,3,7,9,2,1,8};	
	int i, pos, aux;

	for(i=0;i<9;i++){
		pos = i;
		aux = numeros[i];

		while((pos>0)&&(numeros[pos-1]>aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}

	cout<<"Orden Ascendente: ";
	for(i=0;i<=8;i++){
		cout<<numeros[i]<<" ";
	}

	cout<<"\nOrden Descendente";
	for(i=8;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";
}
