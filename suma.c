#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int n;
int contador=1;
int acumulador;
int num;
main(){
	printf("cuantos numero quieres sumar");
	scanf("%d",&n);
	while(contador<=n){
		printf("ingrese numero\n");
		scanf("%d",&num);
	acumulador=acumulador+num;
	contador++;
	}
	printf("la suma =%d",acumulador);
}
