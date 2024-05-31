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
	char modelo;
	int edad, conduciendo, color;
	float pc;
	printf("PROGRAMA QUE CALCULA EL IMPORTE DE UN AUTOMÓVIL");
	printf("\nSeleccione el modelo de su automovil");
	printf("\nA");
	printf("\nB");
	printf("\nC");
	printf("\nElija el modelo correspondiente: ");
	scanf("%c", &modelo);
	printf("\nSeleccione el color de su automóvil");
	printf("\n1.Claro");
	printf("\n2.Oscuro");
	printf("\nSeleccione el color correspondiente: ");
	scanf("%i", &color);
	printf("Introduzca la edad del conductor: ");
	scanf("%i", &edad);
	printf("Introduzca los años que lleva conduciendo con permiso: ");
	scanf("%i", &conduciendo);
	switch(modelo)
	{
		case 'a': case 'A': 
			if(color==1){
			pc=3800;}
			else 
				if(color==2){
				pc=4340;}
				else(color!=2 || color!=1);{
					printf("\nERROR EN EL COLOR\n");}
			break;
		case 'b': case 'B': 
			if(color==1){
			pc=4930;}
			else 
			if(color==2){
				pc=5600;}
				else(color!=2 || color!=1);{
					printf("\nERROR EN EL COLOR\n");}
			break;	
		case 'c': case 'C': 
			if(color==1){
			pc=7570;}
			else 
			if(color==2){
				pc=8250;}
				else(color!=2 || color!=1);{
					printf("\nERROR EN EL COLOR\n");}
			break;
		default:
			printf("\nERROR EN EL MODELO\n");
	}
	if(edad>0 && edad<=20){
		pc=pc*1.25;}
	else
		if(edad>0 && edad<=30){
			pc=pc*1.10;}
		else
			if(edad>0 && edad<=65){
				pc=pc;}
			else
				if(edad>0 && edad>65){
					pc=pc*1.15;}
				else{
				printf("\nERROR EN LA INTRODUCCIÓN DE LA EDAD\n");
				pc=0;}
	if(conduciendo>0 && conduciendo<=2){
		pc=pc*1.25;	
		printf("El valor del importe es: %0.2f", pc);}
	else
		if(conduciendo<=0){
			printf("\nERROR EN EL TIEMPO DE CONDUCCIÓN\n");}
	printf("El valor del importe es: %0.3f\n", pc);
	system("PAUSE");
	return 0;
}
