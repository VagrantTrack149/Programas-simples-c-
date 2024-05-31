/*Nombre del Programa:  
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 06/11/2020
Descripción: */
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<locale>
main()
{	int r, i, j;
	setlocale(LC_CTYPE, "Spanish");
	system("cls");
	for (j=1; j<=10; j++){
		printf("Tabla de multiplicar del %i\n",j);
	for (i=1; i<=10; i++)
		{r=i*j;
			printf("\n El resultado de %i por %i es igual a: %i \n", j,i,r);	}}
	i=1;
	j=1;
	printf("\nCon while\n");
	while(j<=10){ i=1;
	printf("Tabla del %i \n",j);
	while (i<=10)
	{r=i*j;
		printf("\n El resultado de %i por %i es igual a: %i \n", j,i,r);
		i++;
		j++;
		}
		}
	i=1;
	j=1;
	printf("\nCon do-while\n");	
	do{
		i=1;
	printf("Tabla del %i", j);
	do {r=i*j;
		printf("\n El resultado de %i por %i es igual a: %i \n", j,i,r);
		i++;}
	while (i<=10);
	}
	while (j<=10);
	system("PAUSE");
	return 0;}
