/*Nombre del Programa: Calcula los números pares del 1	 al 50 
Elaboró: N0eil Otniel Moreno Rivera       No Lista:  20
Fecha: 28/10/2020
Descripción: PROGRAMA QUE CALCULA LOS NUMEROS DEL 1 AL 50 PARES */

#include <stdio.h>
#include <conio.h>
main(){
printf("Ejercicio resuelto con While\n");
int i=2, s=0;
	printf("La serie de numeros pares entre 1 y 50 son:\n");
for(i==2;i<=50;i==i+2){
	printf("%d \n",i);
	s= s + i;
	i= i + 2;}
	printf("la sumatoria es: \n");
	printf("%d\n",s);
getch(); 
return 0;
}
