/*Nombre del Programa:  
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 06/11/2020
Descripción: */
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<locale>
main()
{	int n, r, i;
	setlocale(LC_CTYPE, "Spanish");
	system("cls");
	printf("Introduce el número del que quieras las tablas de multiplicar: ");
	scanf("%i",&n);
	printf("\nCon for\n");
	for (i=0; i<=10; i++)
		{r=i*n;
			printf("\n El resultado de %i por %i es igual a: %i \n", n,i,r);	}
	i=0;
	printf("\nCon while\n");
	while (i<=10)
	{r=i*n;
		printf("\n El resultado de %i por %i es igual a: %i \n", n,i,r);
		i++;	}
	i=0;
	printf("\nCon do-while\n");	
	do {r=i*n;
		printf("\n El resultado de %i por %i es igual a: %i \n", n,i,r);
		i++;}
	while (i<=10);
	system("PAUSE");
	return 0;}
