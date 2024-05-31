/*Nombre del programa: Ejercicio de arreglos 3 pag.169
Elaboró: Neil Otniel Moreno Rivera    No.l: 20
Fecha: 24/11/2020
Descripción: Almacene los elementos de una matriz mxn (máximo 10x10)[Los coloque aleatorios para facilidad de la clase]
e imprimir :
a) Suma de los elementos.
b) Promedio de los elementos.
c) Elemento que más se repite (moda) [Falta]*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	srand(time(NULL));
	setlocale(LC_CTYPE, "Spanish");
	int M[10][10], i, j, m,n,rango,grant,moda,frec[100]={0};
	float prom=0, suma=0, ele=0;
	printf("¿De cuantas filas será la matriz?(Un maximo de 10, Solo valores positivos):	");
	scanf("%d",&m);
	printf("¿De cuantas columnas será la matriz?(Un maximo de 10, Solo valores positivos):	");
	scanf("%d",&n);
	if(m<=10 && n<=10){
		if(m>=0 && n>=0){
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			M[i][j]=(rand()%21)-10;
			printf("%d\t", M[i][j]);
			if(M[i][j]>=-10 && M[i][j]<=10){
				frec[M[i][j]]++;
			}
			if(M[i][j]>0 || M[i][j]<0){
				suma=suma+M[i][j];
			}
		}
		}
		printf("\n");
		for(rango=0;rango<=10;rango++){
			if(frec[rango]>grant){
				grant=frec[rango];
				moda=rango;
			}
		}
	}
	ele=m*n;
	prom=suma/ele;	
	printf("\n La suma de los números es: %0.1f\n",suma);
	printf("El promedio de los elementos es: %0.3f\n", prom);
	printf("La moda de la matriz es: %d\n",moda);
	}
	else{
		printf("\nError, intentelo de nuevo\n");
	}
	system("PAUSE");
	return 0;
}
