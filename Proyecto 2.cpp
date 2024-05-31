/*Nombre del Programa: Plantilla base  
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 26/09/2020
Descripción: Problema 2 */

#include <stdio.h>  
#include <stdlib.h> 
#include <conio.h>
#include <iostream>
using namespace std;
       
int main(int argc, char *argv[]) 
{
	int A, B, V;
	printf("\n Introduzca el radio ecuatorial en KM: ");
       scanf("%d, A");
    printf("\n introduzca el radio polar en KM:");
    	scanf("%d,B");
    V = 3.1416*(A^2)*B;
	printf("\n Volumen de la tierra considerando que es un esferoide es:" , V);  /* Error en las etiquetas*/
    cout<<"\nEl volumen de la tierra considerando que es un esferoide es:  "<<V<<endl;	
	
    
    return 0; 
}


