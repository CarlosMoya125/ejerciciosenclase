#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define pi 3.1416
main(){
	float radio, area;
	printf("ingrese numero");
	scanf("%f",&radio);
	area= pi*(radio*radio);
	printf("%f",area);
	getch();
}

