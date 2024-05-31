/*Nombre del Programa:  Importe anual de un coche
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 25/10/2020
Descripción: PROGRAMA QUE CALCULA EL IMPORTE ANUAL DE UN COCHE DEPENDIENDO EL MODELO,COLOR,EDAD DEL CONDUCTOR Y TIEMPO MANEJANDO*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
#include<locale>

main()
{
	setlocale(LC_CTYPE, "Spanish");
	system("cls"); 
	float importe, Apagar;
	int bolita;
	printf("PROGRAMA QUE CALCULA EL IMPORTE EN LA COMPRAS DE UN SUPERMERCADO");
	printf("\n¿DE QUE COLOR ES SU BOLITA?   ");
	printf("\n1.Verde");
	printf("\n2.Amarilla");
	printf("\n3.Negra");
	printf("\n4.Blanca");
	printf("\nSeleccione el color de la bolita:  ");
	scanf("%i", &bolita);
	printf("Introduzca el importe total de su compra: ");
	scanf("%f", &importe);
	switch (bolita)
	{
		case 1: 
			if(importe>0 && bolita==1){
			Apagar=importe*0.80;
			printf("El total a pagar es: %0.3f",Apagar);}
			else 
				if(importe<=0){
				printf("Valores invalidos, Solo valores positivos");}
	
		break;
		case 2: 
			if(importe>0 && bolita==2){
			Apagar=importe*0.75;
			printf("El total a pagar es: %0.3f",Apagar);}
			else 
				if(importe<=0){
				printf("Valores invalidos, Solo valores positivos");}
			break;	
		case 3: 
			if(importe>0 && bolita==3){
			Apagar=importe*0.70;
			printf("El total a pagar es: %0.3f",Apagar);}
			else 
				if(importe<=0){
				printf("Valores invalidos, Solo valores positivos");}
			break;
		default:
			printf("\nAcción invalida\n");
	}
	system("PAUSE");
	return 0;
}
