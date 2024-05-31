/*Nombre del Programa: Plantilla base  
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 26/09/2020
Descripción: Problema 1 */

#include <stdio.h>  
#include <stdlib.h> 
#include <conio.h>
#include <iostream>

using namespace std;    
int main(int argc, char *argv[]) 
{
	int Vi, Si, T, A, C=0;
	printf("\n Introduzca Velocidad inicial en metros sobre segundo: ");
       scanf("%d,Vi");
    printf("\n introduzca el tiempo en segundos: ");
    	scanf("%d,T");
    printf("\n introduzca el desplazamiento inicial en metros: ");
    	scanf("%d,Si");
    printf("\n Introduzca la aceleración en metros sobre segundo cuadrado: ");
    	scanf("%d,A");
    C = Si + (Vi * T) + (1 / 2) * A * (T ^ 2);
	printf("\n el desplazamiento en el tiempo es igual a: ", C); // error en las etiquetas//
	cout<<"\nEl desplazamiento en el timepo es igual a:  "<<C<<endl;
 
    return 0; 
}
