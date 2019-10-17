#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int tabla;
int limite;
int contador=1;
int acumulador;
int resul;
main(){
	printf("ingrese la tabla ");
	scanf("%d",&tabla);
		printf("ingrese el limite ");
	scanf("%d",&limite);
	while(contador<=limite){
		
	resul=contador*tabla;
	printf("resultado por %d =%d\n",contador,resul);
	contador++;
	}
	
}
