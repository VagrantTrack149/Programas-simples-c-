/*Nombre del Programa: Plantilla base  
Elabor�: Neil Otniel Moreno Rivera      
Descripci�n: Problema 3 */

#include <stdio.h>  
#include <stdlib.h> 
#include <conio.h>
#include <iostream>
using namespace std;
       
int main(int argc, char *argv[]) 
{
	int ED1, ED2, Z, EP1, EP2, X, T, P, C;
	printf("\n Introduzca la calificaci�n del primer examen departamental en base 10:");
       scanf("%d,ED1");
    printf("\n Introduzca la calificaci�n del segundo examen departamental en base 10:");
       scanf("%d,ED2");
    Z=(((ED1+ED2)/2)*0.4);
   printf("\n Introduzca la calificaci�n del primer examen parcial en base 10:");
       scanf("%d,EP1");
   printf("\n Introduzca la calificaci�n del segundo examen parcial en base 10:");
       scanf("%d,EP2");
    X=(((EP1+EP2)/2)*0.3);
    printf("\n Introduzca la calificaci�n de los trabajos y tareas con un maximo de 2:");
       scanf("%d, T");
    printf("\n Introduzca la calificaci�n del proyecto con un maximo de 1:");
       scanf("%d, P");
    C=(Z+X+T+P);
	printf("\n La calificaci�n final es:", C);
	  
    cout<<"\nLa calificaci�n final es:  "<<C<<endl;	
    
    return 0; 
}


