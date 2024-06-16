#include<iostream>

using namespace std;

int main(){
	int numeros[] = {6,4,2,9,7,5,3,1,8};
	int i,j,aux;

	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(numeros[j]>numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}

	cout<<"Orden Ascendente: ";
	for(i=0;i<9;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\nOrden Descendente: ";
	for(i=8;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";
	
}
