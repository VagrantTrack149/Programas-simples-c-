/*Nombre del programa: Ejercicio de arreglos 8 pag.154
Elaboró: Neil Otniel Moreno Rivera    No.l: 20
Fecha: 22/11/2020
Descripción: Genere aleatoriamente un vector de tamaño 20 con números entre 0 y 150 y genere otras tres listas con
los siguientes criterios:
a) Si los números están comprendidos entre 0 y 50 irán en la lista 1.
b) Si los números están comprendidos entre 51 y 100 irán en la lista 2.
c) Si los números son mayores a 101 irán en la lista 3.
Al final imprimir las cuatro listas. */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	srand(time(NULL));
	int G[20], i, num, a[20], b[20], u=0, j=0, c[20], h=0;
	printf("Lista general de números aleatorios entre 0 y 150");
	printf("\nEstos números son aleatorios");
	for(i=0; i<20; i++){
		num=rand()%151;
		G[i]=num;
		a[i]=0;
		b[i]=0;
		c[i]=0;
		printf("\nG(%i)=%i", i, num);}
	for(i=0; i<20; i++){
		if(G[i]>=0 && G[i]<=50 ){
			a[u]=G[i];
			u++;}
		else if(G[i]>=51 && G[i]<=100){
			b[j]=G[i];
			j++;}
		else{
			c[h]=G[i];
			h++;} }	
	printf("\n Lista 1, números aleatorios entre el 0 y el 50:");
	for(i=0; i<u; i++){
		printf("\na(%i)=%i", i, a[i]);}
	printf("\nlista 2, números aleatorios entre el 51 y el 101");
	for(i=0; i<j; i++){
		printf("\nb(%i)=%i", i, b[i]);}
	printf("\nLista 3, números aleatorios entre el 101 y el 150");
	for(i=0; i<h; i++){
		printf("\nc(%i)=%i", i, c[i]);}
	printf("\n");
	system("PAUSE");
    return 0;}
