/*Nombre del Programa:  Programa que calcula la sumatoria en 1 en 1
Elabor�: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 19/10/2020
Descripci�n: PROGRAMA QUE CALCULA LA SUMATORIA DE LOS N�MEROS DADOS EN 1 EN 1*/
#include <stdio.h>
#include <conio.h>
#include <locale>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int i, d;
	float s;
	printf("Dame el n�mero del denominador: ");
	scanf("%i",&d);
	for(i=1;i<=d;i++)
	{
		s=s+1.0/i;
		printf("%i \n",i);
	}
	printf("La serie armonica es: %0.3f", s);
	getch();
	return 0;
}
