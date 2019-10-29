#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int num,var,cont;
int menu;
 int edad;
 int dia;
 int tra;
  float gasto,descu;
main(){
	do{

	printf("Tramites de spa=1\nPiramide =2\n");
	scanf("%d",&menu);
	switch(menu){
		case 1:
			printf("ingrese su edad\n");
 	scanf("%d",&edad);
 		printf("ingrese cuantos dias es su tratamineto\n");
 	scanf("%d",&dia);
 		printf("ingrese su tipo de tratamiento (1,2,3,4)\n");
 	scanf("%d",&tra);
 	switch(tra){
 		case 1:
 			gasto=dia*2800;
 			break;
 		case 2:
 			gasto=dia*1950;
 				break;
 		case 3:
 			gasto=dia*2500;
 				break;
 		case 4:
 			gasto=dia*1150;
 				break;
 		default:
 		printf("tratamiento no existe\n");
 			break;
	 }
	 if(edad>60){
	 	descu=(25*gasto)/100;
	 	gasto=gasto-descu;
	 }
	 if(edad<25){
	 	descu=(15*gasto)/100;
	 	gasto= gasto-descu;
	 }
	 
 	printf("su gasto total fue = %.2f\n", gasto);
			break;
		case 2:
			var=0;
	    printf("ingrese numero");
	      scanf("%d",&num);
	      if(num<=9){
     	  for(cont=1;cont<=num;cont++){
		var=(var*10)+cont;
		printf("%d\n",var);

	}	
for(cont=1;cont<num;cont++){
		var=(var/10);
		printf("%d\n",var);

	}	
    	}
    	getch();
			break;
		default:
			printf("numero incorrecto\n");
	}
		}
		while(menu>0);
}
