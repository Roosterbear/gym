#include<iostream>
#include<cctype>

using namespace std;

// Prototype
void pedirDatos();
void contarVocales(char *);

char palabraUsuario[50];

int main(){
  pedirDatos();
  contarVocales(palabraUsuario); //&palabraUsuario[0]

}

void pedirDatos(){
  cout<<"Digite una palabra o frase corta: ";
  cin.getline(palabraUsuario,50,'\n');  
}

void contarVocales(char *palabra){
  int contA=0, contE=0, contI=0, contO=0, contU=0;
  while(*palabra){
    *palabra = toupper(*palabra);
    switch(*palabra){
      case 'A': contA++; break;
      case 'E': contE++; break;
      case 'I': contI++; break;
      case 'O': contO++; break;
      case 'U': contU++; break;
    }
    palabra++;
  }
  cout<<"Vocales A: "<<contA<<endl;
  cout<<"Vocales E: "<<contE<<endl;
  cout<<"Vocales I: "<<contI<<endl;
  cout<<"Vocales O: "<<contO<<endl;
  cout<<"Vocales U: "<<contU<<endl;
}