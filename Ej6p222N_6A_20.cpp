/*Nombre del Programa: Problema 6 pag 222
Elaboró: Neil Otniel Moreno Rivera    No Lista:  20
Fecha: 7/12/2020
Descripción: Leer n datos para un vector de números reales, utilizando funciones para calcular la cantidad de: valores
impares, valores pares y veces que se repite el valor máximo del arreglo.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale>

int U[100],n;

int imp( ) { int i, c, j=0;
	printf("Los números impares son: \n");
	for(i=0; i<n; i++) {c=U[i]%2;
		if(c!=0){printf("%d\n", U[i]);
			j++;}}
	printf("\n"); }
int max() { int i, mayor=0, j=0;	
	for(i=0; i<n; i++)
	{ if(mayor<U[i])
		{
			mayor=U[i];
		}}
	for(i=0; i<n; i++){ if(mayor==U[i])
		{
			j++;
		}}
	printf("\nEl valor mayor es %d y las veces que se repite son %d\n", mayor, j);}
int par( ) {	int i, c, j=0;;
	printf("Los números pares son: \n");
	for(i=0; i<n; i++)
	{
		c=U[i]%2;
		if(c==0)
		{
			printf("%i\n",U[i]);
			j++;
		}}}
int ant() { int i;
	for(i=0; i<n; i++)
	{
		printf("Introduzca los datos: \n");
		scanf("%d",&U[i]);
	} }
main()
{	setlocale(LC_CTYPE, "Spanish");
	int i;
	printf("\nDame el número de datos del vector: ");
	scanf("%d", &n);
	int U[n];
	ant( );
	imp( );
	par( );
	max( );
	system("PAUSE");
	return 0;}
