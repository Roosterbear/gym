#include<iostream>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}p1;

// prototype
void pedirDatos();
void mostrarDatos(Persona);

int main(){
	pedirDatos();
	mostrarDatos(p1);
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>p1.edad;
}

void mostrarDatos(Persona p){
	cout<<"Nombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}