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
	int M[10][10], i, j, m,n, cero=0, neg=0, pos=0, suma_neg=0, suma_pos=0;
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
			if(M[i][j]==0){
				cero++;
			}
			else{ if(M[i][j]>0){
				pos++;
				suma_pos=suma_pos+M[i][j];
			}
			else{
				neg++;
				suma_neg=suma_neg+M[i][j];
			}
		}
		}
		printf("\n");
	}
	printf("\n La suma de los n�meros positivos es: %d\n",suma_pos);
	printf("\n La suma de los n�meros negativos es: %d\n",suma_neg);
	printf("\n La cantidad de ceros es: %d",cero);
	printf("\n La cantidad de n�meros positivos es: %d",pos);
	printf("\n La cantidad de n�meros negativos es: %d\n",neg);}
	}
	else{
		printf("\nError, intentelo de nuevo\n");
	}
	system("PAUSE");
	return 0;
}
