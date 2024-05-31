/*Nombre del Programa:  Número de pesas
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 14/10/2020
Descripción: Programa que calcula el número de pesas de 1000, 500, 200, 100, 50, 10, 5, 2 y 1*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
#include <locale.h>

main()
{
int X_1000, X_500, X_200, X_100, X_50, X_10, X_5, X_2, gr;

  setlocale(LC_CTYPE, "Spanish");
    system("cls");

    printf("\n Programa que el número de pesas de acuerdo a los gramos");
    printf("\n Recuerda introducir un valor en gramos menor a 5000 y mayor a 0");
    printf("\n teclea el total de los gramos: ");
    scanf("%i", &gr);
    
    if(gr<5000 && gr>0)
    {
	
	X_1000=gr/1000;
	gr=gr-(X_1000*1000);
	
	X_500=gr/500;
	gr=gr-(X_500*500);
	
	X_200=gr/200;
	gr=gr-(X_200*200);
	
	X_100=gr/100;
	gr=gr-(X_100*100);
	
	X_50=gr/50;
	gr=gr-(X_50*50);
	
	X_10=gr/10;
	gr=gr-(X_10*10);
	
	X_5=gr/5;
	gr=gr-(X_5*5);
	
	X_2=gr/2;
	gr=gr-(X_2*2);
	gr=gr;
	
	printf("\nEl número de pesas de 1000 son: %i", X_1000);
	printf("\nEl número de pesas de 500 son: %i", X_500);
	printf("\nEl número de pesas de 200 son: %i", X_200);
	printf("\nEl número de pesas de 100 son: %i", X_100);
	printf("\nEl número de pesas de 50 son: %i", X_50);
	printf("\nEl número de pesas de 10 son: %i", X_10);
	printf("\nEl número de pesas de 5 son: %i", X_5);
	printf("\nEl número de pesas de 2 son: %i", X_2);
	printf("\nEl número de pesas de 1 son: %i", gr);

	}
	else
	{
	printf("\n");
	printf("\n Dato no valido");
	printf("\n\n");
	}
	printf("\n");	
	system("PAUSE");
}
