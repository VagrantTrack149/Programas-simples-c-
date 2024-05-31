/*Nombre del Programa:  Programa que calcula la sumatoria en 1 en 1
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 19/10/2020
Descripción: PROGRAMA QUE CALCULA LA SUMATORIA DE LOS NÚMEROS DADOS EN 1 EN 1*/
#include <stdio.h>
#include <conio.h>
#include <locale>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int i, suma=0, n;
	printf("Dame un número entero positivo: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++ )
	{
		printf("%d \n",i);
		suma +=i;
	}
	printf("La suma es %d",suma);
	getch();
	return 0;
}
