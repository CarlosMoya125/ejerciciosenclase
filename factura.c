#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

char nombre[10],cedula[10],descp1[10],descp2[10];
int nproductos,cantp1,cantp2;
float preciop1,precio2,subtotal,preciovenp1,total,iva,preciovenp2;
 main (){
 printf("	\n ingrese nombre");
 scanf("%s",&nombre);
 printf("\ningrese cedula");
 scanf("%s",&cedula);
 printf("\ningrese el numero de productos\n");
scanf("\n%d",&nproductos);
 printf("\ningrese descripcion del producto 1\n");
 scanf("%s",&descp1);
 printf("\ningrese el precio del producto 1\n");
scanf("%f",&preciop1);
printf("\ningrese la cantidad del producto 1\n");
scanf("%d",&cantp1);
preciovenp1=preciop1*cantp1;
  printf("\ningrese descripcion del producto 2\n");
  scanf("%s",&descp2);
   printf("\ningrese el precio del producto 2\n");
   scanf("\n%f",&precio2);
   printf("\ningrese la cantidad del producto 2\n");
   scanf("%d",&cantp2);
   preciovenp2=precio2*cantp2;
   subtotal=preciovenp1+preciovenp2;
   iva= (subtotal*12)/100;
   total=subtotal-iva;
   printf("***************************empresa xyz********************");
printf("\nsu nombre es: %s",nombre);
printf("\nsu cedula es: %s",cedula);
printf("\nsu primer producto es: %s\nvale:%f\ny comrpro%d\n",descp1,preciop1,cantp1);

printf("\nsu primer producto es: %s\nvale:%f\ny comrpro%d\n",descp2,precio2,cantp2);
   printf("\nsu subtotal es: %f",subtotal);
   printf("\nsu iva es: %f",iva);
   printf("\nsu total es: %f\n",total);
   printf("***************************empresa xyz********************");
 }

	
