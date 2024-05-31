/*Nombre del programa: Ejercicio de arreglos 4 pag.154
Elaboró: Neil Otniel Moreno Rivera    No.l: 20
Fecha: 22/11/2020
Descripción: Almacene en un arreglo, n elementos (máximo 30) e imprimir la suma:
a) de números pares.
b) de números impares.
c) total de los elementos del arreglo. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_CTYPE, "Spanish");
	int i, n, mayI=0, sumaP=0, sumaimp=0, sumatot=0;
	int U[30];
	printf(" ¿De cuantos números va a querer realizar las operaciones?(Con un maximo de 30 números por colocar)\n ");
	scanf("%d",&n);
	if(n<=30){
	for(i=0;i<n;i++){
		printf("Ingrese numero %d ", i+1);
		scanf("%d", &U[i]);
	}
	for(i=0;i<n;i++){
		if(U[i]%2==0){
			sumaP=sumaP+U[i];
		}
		if(U[i]%2!=0){
				sumaimp=sumaimp+U[i];
		}
	}
	printf("La suma de los pares es: %d\n", sumaP);
	printf("La suma de los impares es: %d\n", sumaimp);
	sumatot=sumaP + sumaimp;			
	printf("La suma del total de arreglos es: %d\n", sumatot);}
	else {
		printf("Error, intente de nuevo volviendo a abrir el programa");
	}
}
