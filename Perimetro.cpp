/*Nombre del Programa: Perimetro
Elaboró: Neil Otniel Moreno Rivera      No Lista:  20
Fecha: 19/10/2020
Descripción: PROGRAMA QUE CALCULA EL PERIMETRO EN CM*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
#include <locale.h>
main() 
{	
	setlocale (LC_CTYPE,"Spanish");
	double PI = 3.14159265358979323846;
	int D;
	float B, P;
    system("cls"); 
    printf("PROGRAMA QUE CALCULA EL PERIMETRO EN CM\n");
    printf("Introduce de que figura quieres el perimetro\n");
    printf("(1)Triangulo equilatero\n");
    printf("(2)Circulo\n");
    printf("(3)Cuadrado\n");
	scanf("%d",&D);
	if (D==1){
		printf("Introduzca el valor de la base del triangulo\n");
		scanf("%f",&B);
		P=fabs(B*3);
		printf("Su perimetro es: %0.3f\n", P);
	exit(0);}
	if (D==2){
		printf("Introduzca el valor del radio del circulo\n");
		scanf("%f",&B);
		P=fabs(B*2*PI);
		printf("Su perimetro es: %0.3f\n", P);
	exit(0);}
	if (D==3){
		printf("Introduzca el valor de un lado del cuadrado\n");
		scanf("%f",&B);
		P=fabs(B*4);
		printf("Su perimetro es: %0.3f\n", P);
	exit(0);}
	if (D <= 0 || D >=4){
		printf("Introduzca solo valores validos\n\n");
	}
    system("PAUSE");  
    return 0; 
}
