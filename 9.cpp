#include <stdio.h>
 
//Con C no C++..
int main()
{
	//piramide con numeros
 
	int i,n,valor=7;
 
	//declara for para el numero de filas que tendra la piramide
	for(i=1;i<=valor;i++){
		//declara una variable para que mantenga un valor predeterminado
			int nv=1;
			//declara while para evaluar nv, y mostrarlo en pantalla
			do{
				//muestra en pantalla numeros consecutivos, columnas
				printf("%d",nv);
				//se suma 1 a nv para que se vaya imprimiendo
				nv++;
				//while siempre se ejecuta si nv es menor a i o igual a i
			}while(nv<=i);
	    //El \n Hace salto cuando nv es igual a I
		printf("\n");
	};
 
	//doble getchar() detiene programa hasta que consiga doble caracter y/o enter
	getchar();
	getchar();
}
