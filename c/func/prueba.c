#include<stdio.h>

void anna1(void){
	// Estamos mandando el nombre de la funcion
	printf("%s\n",__func__);
	return;
}

void main(void){
	anna1();
}
