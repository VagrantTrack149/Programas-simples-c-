/*Nombre del programa: Ejercicio de arreglos 8 pag.154
Elabor�: Neil Otniel Moreno Rivera    No.l: 20
Fecha: 22/11/2020
Descripci�n: Genere aleatoriamente un vector de tama�o 20 con n�meros entre 0 y 150 y genere otras tres listas con
los siguientes criterios:
a) Si los n�meros est�n comprendidos entre 0 y 50 ir�n en la lista 1.
b) Si los n�meros est�n comprendidos entre 51 y 100 ir�n en la lista 2.
c) Si los n�meros son mayores a 101 ir�n en la lista 3.
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
	printf("Lista general de n�meros aleatorios entre 0 y 150");
	printf("\nEstos n�meros son aleatorios");
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
	printf("\n Lista 1, n�meros aleatorios entre el 0 y el 50:");
	for(i=0; i<u; i++){
		printf("\na(%i)=%i", i, a[i]);}
	printf("\nlista 2, n�meros aleatorios entre el 51 y el 101");
	for(i=0; i<j; i++){
		printf("\nb(%i)=%i", i, b[i]);}
	printf("\nLista 3, n�meros aleatorios entre el 101 y el 150");
	for(i=0; i<h; i++){
		printf("\nc(%i)=%i", i, c[i]);}
	printf("\n");
	system("PAUSE");
    return 0;}
