#include<stdio.h>

void anna1(void){
	printf("%s\n",__func__);
	return;
}

void main(void){
	anna1();
}
