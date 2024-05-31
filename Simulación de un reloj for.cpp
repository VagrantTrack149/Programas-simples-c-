/*Nombre del Programa: 
Elaboró: Neil Otniel Moreno Rivera    No Lista:  20
Fecha: 9/11/2020
Descripción: */
#include<stdio.h>
#include<stdlib.h>
main()
{
	int s, m, h;
	for (h=0; h<=23; h++){
		for(m=0; m<=59; m++){
			for(s=0; s<=59; s++){
				printf("\n%i:%i:%i\n",h,m,s);
			}
		}
	}
	system("PAUSE");
	return 0;
}
