#include<stdio.h>
#include<conio.h>
#include<stdlib.h>/*libreria math*/
#define pi 3.1416
/*Defina el area del circulo*/

main(){
	float radio, area;
	printf("ingrese numero");
	scanf("%f",&radio);
	area= pi*(radio*radio); /*pow para potencia*/
	printf("el area es: %f",area);/*numero de decimales %.2f*/
	getch();
}

