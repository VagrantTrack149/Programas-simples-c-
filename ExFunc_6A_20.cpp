/*Nombre del Programa: Examen Funciones D:
Elaboró: Neil Otniel Moreno Rivera    No Lista:  20
Fecha: 9/12/2020
Descripción: .*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
int ale( ), ale_imp( ),ale_par( );
int v;
main(){ 
do{
int opc;
setlocale(LC_CTYPE, "Spanish");
printf ("¿Qué deseas hacer?\n");
printf ("1. Llenar un vector con números aleatorios entre 25 y 75\n");
printf ("2. Llenar las columnas impares de una matriz con números aleatorios entre 51 y 100\n");
printf ("3.Llenar las columnas pares de una matriz con números aleatorios entre 51 y 100.\n");
scanf ("%d",&opc);
if (opc == 1) ale ( );
else if (opc== 2) ale_imp ( );
else ale_par ( );
printf("\n¿Quieres volverlo a intentar?\n");
printf("1 para repetir\n");
printf("2 para cerrar el programa\n");
scanf("%d",&v);}
while(v==1);
getch();
return 0;
}
int ale ( ){
	srand(time(NULL));
	int i, num,n,G[100],prom,sum;
	printf("Coloque la cantidad de números aleatorios que desea:\n");
	scanf("%d",&n);
	printf("Lista números aleatorios entre 25 y 75\n");
	for(i=0; i<n; i++){
		num=25+rand()%76;
		G[i]=num;
		printf("G(%i)=%i\n", i, num);
		sum=sum+G[i];}
		prom=sum/n;
		printf("El promedio es %d",prom);
}
int ale_imp ( ){
	srand(time(NULL));
	int matriz[10][10];
	int fila,tam,columna,num,i,sumaimp;
	printf("¿Qué tamaño debe de tener la matriz(Máximo 10x10): ");
	scanf("%d",&tam);
	for(fila=0;fila<=tam;fila++){
	for(columna=0;columna<tam;columna++){
		if(columna%2!=0){
		matriz[fila][columna]=rand()%51;
		printf("%d\t",matriz[fila][columna]);
		sumaimp=sumaimp+matriz[fila][columna];}
		else{
		matriz[fila][columna]=51+rand()%101;
		printf("%d\t",matriz[fila][columna]);
		}}
	printf("\n");}
	printf("La suma total de las columnas impares es: %d",sumaimp);
	printf("Comienza desde el 0, por lo que la matriz de 8 tiene 0,1,2,3,4,5,6,7");
}
int ale_par ( ){
	srand(time(NULL));
	int matriz[10][10];
	int fila,tam,columna,num,i,prom,sum,sums,tams;
	printf("¿Qué tamaño debe de tener la matriz(Máximo 10x10): ");
	scanf("%d",&tam);
	for(fila=0;fila<tam;fila++){
	for(columna=0;columna<tam;columna++){
		if(columna%2==0){
		matriz[fila][columna]=51+rand()%101;
		printf("%d\t",matriz[fila][columna]);
		sum=sum+matriz[fila][columna];}
		else{
		matriz[fila][columna]=rand()%51;
		printf("%d\t",matriz[fila][columna]);
		}}
	printf("\n");}
	sums=sum*sum;
	tams=tam*tam;
	prom= sums/tams;
	printf("El promedio de los cuadrados de las columnas pares es: %d",prom);
	printf("\nComienza desde el 0, por lo que la matriz de 8 tiene 0,1,2,3,4,5,6,7\n");
}
