/*Nombre del Programa: 
Elaboró: Neil Otniel Moreno Rivera    No Lista:  20
Fecha: 9/11/2020
Descripción: */
#include<stdio.h>
#include<stdlib.h>
main()
{
	int c,o;
	float a,i,n,suma,b;
	a=0;
	n=0;
	i=1;
	b=4;
	do{
	system("cls");
	printf("Selecciona la serie que deseas hacer: ");
	printf("\n1.-	LC=1/1+1/2+1/3+1/4 +... 1/n	\n");
	printf("\n2.-	P=4-4/3+4/5-4/7+4/9-4/11. . .	\n");
	printf("\n3.-	D=1/2+1/4-1/6+1/8-1/10+1/12. . .	\n");
	scanf("%i",&c);
	switch (c){
	case 1:
		if(n>=0.01){
		while(i>=1){
			n=1.0/i;
			a=a+n;
			printf("\n%0.f\n",a);
			i++; break;
		}}
	case 2:
		if(n>=0.01){
			while(i>=1){
				n=1.0+i;
				b=4/n;
				printf("\n%0.2f",b);
				i++;
			}
		}	
		
		
		}
	printf("\n¿Deseas continuar?\n");
	printf("\n1. Si\n");
	printf("\n2.No, salir\n");
	scanf("%i",&o);
	}
	while(o==1);
	system("PAUSE");
	return 0;
}
