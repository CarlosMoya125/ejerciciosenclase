#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int n;
int contador=1;
int acumulador;
main(){
	scanf("%d",&n);
	while(contador<=n){
	printf("%d\n",contador);
	acumulador=acumulador+contador;
	contador++;
	}
	printf("la suma =%d",acumulador);
}
