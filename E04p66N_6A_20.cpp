/*Nombre del Programa:  Domingo de Pascua
Elaboró: Neil Otniel Moreno Rivera       No Lista:20
Fecha: 25/10/2020
Descripción: PROGRAMA QUE CALCULA EL DOMINGO DE PASCUA SEGÚN EL AÑO DADO*/

#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<math.h>

main()
{
	int a, b, c, d, e, n, an;
	setlocale(LC_CTYPE, "Spanish");
	system("cls");
	printf("\nPrograma que calcula el Domingo de Pascua");
	printf("\nIngrese el año(Solo valores positivos): ");
	scanf("%i", &an);
	if(an>=0){
		a=an%19;
		b=an%4;
		c=an%7;
		d=(19*a+24)%30;
		e=(2*b+4*c+6*d+5)%7;
		n=22+d+e;
		if(n>0 && n<=31)
		{
		printf("\nEl domingo de pascua del año es: %i de marzo\n", n);
		}
		else 
		if(n>31)
		{
		n=d+e-9;
		printf("\nEl domingo de pascua del año es: %i de abril\n", n);
		}
		else
		printf("Datos invalidos");
		}
	else
	{
	printf("\nDatos invalidos, datos aceptados solamente positivos\n");
	}
	system("PAUSE");
	return 0;
}
