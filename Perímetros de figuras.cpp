/*Nombre del Programa:  Calculo del perimetro
Elabor�: Neil Otniel Moreno Rivera     
Descripci�n: Programa que calcula los diferentes perimetros de las figuras
USO DEL CASE*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
#include<locale.h>

#define PI 3.1416

main()
{
	setlocale(LC_CTYPE, "Spanish");
char opcion;
float x, peri;

printf("Programa que calcula el perimetro de figuras");
printf("\n\n----------Men� de opciones----------");
printf("\nA.Per�metro de un tri�ngulo equil�ero");
printf("\nB.Per�metro de un circulo");
printf("\nC.Per�metro de un cuadrado");
printf("\n\nElige la opci�n que deseas calcular: ");
scanf("%c", &opcion);
if(x>=0)
{
switch(opcion)
	{
	case 'a': case 'A':
		printf("Digite la base: ");
		scanf("%f", &x);
		peri=x*3;
		printf("El per�metro es: %0.2f\n", peri);
	break;
	case 'B': case 'b':
		printf("Teclea el valor del radio ");
		scanf("%f", &x);
		peri=x*2*PI;
		printf("El per�metro es: %0.2f\n", peri);
	break;
	case 'C': case 'c':
		printf("Teclea el valor del lado del cuadrado ");
		scanf("%f", &x);
		peri=x*4;
		printf("El per�metro es: %0.2f\n", peri);
		break;
	default: 
		printf("\nLa opci�n que digito, no existe\n");


	}
}
else
{
	printf("\nDATO ERRONEO, INTENTELO DE NUEVO\n");
}
		
system("PAUSE");
return 0;	
		
}

