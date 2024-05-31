/*Nombre del programa: Ejercicio de arreglos 10 pag.169
Elaboró: Neil Otniel Moreno Rivera    No.l: 20
Fecha: 26/11/2020
Descripción: Genere una matriz cuadrada (máximo 10x10) con números aleatorios entre 1 y 50, manejando el
siguiente criterio: las filas se llenarán con números acordes a ellas, si son filas impares (1,3,5,etc.) con
números impares y si son las filas pares (0,2,4,etc.) con números pares. Al final imprimir dicha matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	srand(time(NULL));
	setlocale(LC_CTYPE, "Spanish");
	int n,i, j,f,par,ale; 
	printf("Introduzca el tamaño de la matriz cuadrada(Solo intrduzca un valor máximo 10):	\n");
	scanf("%i",&n);
	int M[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			f=i%2;
			if(f==0){do{
				ale=rand()%51;
				par=ale%2;
				if(par==0){
				M[i][j]=ale;}
			}while(par!=0);
			}else{do{
				ale=rand()%51;
				par=ale%2;	
				if(par!=0){
				M[i][j]=ale;}
				}while(par!=0);	}}}
		for(i=0; i<n; i++)
	{printf("\nFila [%i]\t", i+1);	
		for(j=0; j<n; j++){
			printf(" %i\t", M[i][j]);}
	printf("\n");}
	system("PAUSE");
	return 2;
}
