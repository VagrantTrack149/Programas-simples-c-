/*Nombre del Programa: Calculo en kilometros sobre hora 
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 3/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA LA VELOCIDAD EN KILOMETROS SOBRE HORA*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>      
int main() 
{
	float  TSE, VMS, VKH;
	int DIS, MIN, SEG, CEN;
	system("cls");
	printf("\n PROGRAMA QUE CALCULA LA VELOCIDAD EN KILOMETROS SOBRE HORA");
	printf("\n Introduzca los minutos (Solo valores positivos): ");
    scanf("%f",&MIN); 
    printf("\n Introduzca los segundos (Solo valores positivos): ");
    scanf("%f",&SEG);
    printf("\n Introduzca las centenas(Colocalas como numeros enteros, ejemplo; 20, Solo valores positivos): ");
    scanf("%f",&CEN);
    TSE = fabs((MIN*60)+fabs(SEG)+fabs(CEN)/1000);
    printf("\n Introduzca la distancia en metros: ");
    scanf("%f",&DIS);
	VMS = fabs(DIS/TSE);
	VKH = (VMS*3600/1000);
	printf("\n la velocidad en Kilometros sobre Hora es: %0.3f", VMS);  
	printf("\n\n");
	system("PAUSE");
    return 0; 
}


