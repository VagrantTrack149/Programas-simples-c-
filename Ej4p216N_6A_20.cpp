/*Nombre del programa: j4 p216
Elaboró: Neil Otniel Moreno Rivera        No. lista:20
Fecha: 07/12/2020
Descripción: Reaalizar con funciones con paso de parámetro
a) Encuentra el mayor entre tres números enteros
b) Calcula el promedio entre un conjunto de n números almacenados en un arreglo
c) Ordena el arreglo utilizando el método de burbuja*/
#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<time.h>

int mayor(int a, int b, int c)
{
	if(a>b)
		return a;
	else if(b>c)
		return b;
		else
			return c;}
float promedio(int e[20], int n)
{	int i;
	float sum=0, prom;
	for(i=0; i<n; i++)
	{	sum=sum+e[i];}
	prom=sum/n;
	return prom;}
int burbuja(int e[20], int n)
{	int i, j;
	float aux;
	for(i=1; i<n; i++){	
	for(j=1; j<n-i; j++){
		if(e[j]>e[j+1]){	aux=e[j];
				e[j]=e[j+1];
				e[j+1]=aux;}}}
	printf("\n\nEl arreglo de manera ordenada: ");
	for(i=0; i<n; i++){
		printf("\na[%i]=%i", i, e[i]);}}
main()
{
	setlocale(LC_CTYPE, "Spanish");
	srand((unsigned)time(NULL));
	int x,y,n,i, e[20], may,opc;
	float prom;
	printf("\n1.Encuentra el mayor entre tres números enteros");
	printf("\n2.Calcula el promedio entre un conjunto de n números almacenados en un arreglo");
	printf("\n3.Ordena el arreglo utilizando el método de burbuja");
	printf("\n¿Qué desea hacer? ");
	scanf("%d", &opc);
	switch(opc)
	{	case 1:
			printf("Introduzca el número 1: \n");
			scanf("%d", &x);
			printf("Introduzca el número 2: \n");
			scanf("%d", &y);
			printf("Introduzca el número 3: \n");
			scanf("%d", &n);
			may=mayor(x,y,n);
			printf("\nEl número mayor es: %i", may);
			break;
		case 2:
			printf("Introduzca el número de elementos del arreglo: \n");
			scanf("%d", &n);
			printf("Los números del arreglo son: \n");
			for(i=0; i<n; i++)
			{
				e[i]=(rand()%101);
				printf("a[%i]=%i\n", i, e[i]);
			}
			promedio(e, n);
			printf("El promedio es: %0.2f\n", prom);
			break;
		case 3:
			printf("Introduzca la cantidad de elementos del arreglo: \n");
			scanf("%d", &n);
			printf("El arreglo es: \n");
			for(i=0; i<n; i++)
			{
				e[i]=(rand()%51);
				printf("\na[%i]=%i", i, e[i]);
			}
			burbuja(e, n);
			break;
		default:
		printf("Error, vuelvalo a intentar\n");}}
