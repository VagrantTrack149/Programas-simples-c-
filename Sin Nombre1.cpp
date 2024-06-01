/*Nombre del programa: Ejercicio de arreglos 1 pag.168
Elabor�: Neil Otniel Moreno Rivera    No.l: 20
Fecha: 22/11/2020
Descripci�n: Almacene los elementos de una matriz mXn (m�ximo 10X10) e imprimir cu�ntos n�meros son ceros,
cu�ntos son negativos, y cu�ntos positivos. Imprimir adem�s la suma de los negativos y la suma de los
positivos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	srand(time(NULL));
	setlocale(LC_CTYPE, "Spanish");
	int M[10][10], i, j, m,n;
	float prom=0, suma=0, ele=0;
	printf("�De cuantas filas ser� la matriz?(Un maximo de 10, Solo valores positivos):	");
	scanf("%d",&m);
	printf("�De cuantas columnas ser� la matriz?(Un maximo de 10, Solo valores positivos):	");
	scanf("%d",&n);
	if(m<=10 && n<=10){
		if(m>=0 && n>=0){
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			M[i][j]=(rand()%21)-10;
			printf("%d\t", M[i][j]);
			if(M[i][j]>0 || M[i][j]<0){
				suma=suma+M[i][j];
			}
		}
		}
		printf("\n");
	}
	ele=m*n;
	prom=suma/ele;	
	printf("\n La suma de los n�meros es: %0.1f\n",suma);
	printf("El promedio de los elementos es: %0.3f\n", prom);
	}
	else{
		printf("\nError, intentelo de nuevo\n");
	}
	system("PAUSE");
	return 0;
}
