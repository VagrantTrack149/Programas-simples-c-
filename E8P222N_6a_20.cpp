/*Nombre del Programa: e8 p222
Elaboró: Neil Otniel Moreno Rivera    No Lista:  20
Fecha: 8/12/2020
Descripción:Imprimir una flecha con asteriscos; utilizar dos funciones, una imprimirá el triángulo y la otra el
rectángulo. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "Spanish");
    int i,j,k,n,b,h,p,so,v;
	printf("Recomendaciones:\n");
	printf("Coloque valores razonables\n");
	printf("Por ejemplo;\n");
	printf("Base triangulo=5	base rectangulo=3	altura rectangulo=4\n");
    printf("¿Qué tan ancha será la base del triangulo?\n");
    scanf("%d",&n);
    printf("¿De que tamaño será la base del rectangulo?\n");
    scanf("%d",&b);
    printf("¿Qué tan alto será el rectangulo?\n");
    scanf("%d",&h);
    if(n>=b){
	for(i=0;i<=n;i++){
		for(k=n;k>i;k--)
			printf(" ");
			for(j=0;j<i;j++)
			printf(" *");
		printf("\n");
	}
	if(n>5){
	if(n%2!=0){
	so=1+n/2;}
	else{
		so=n/2-1;
	}} else{
		if(n%2!=0){
		so=n/2;}else{
		so=n/2;	
		}
	}
	for(i=1;i<=h;i++){
		for(p=0;p<=so;p++){
		printf(" ");}
		for(j=1;j<=b;j++){
			printf ("* ");
		}
		printf("\n");
	}}else{
		printf("La base del rectangulo debe de ser menor a la del triangulo\n");
	}
  system("PAUSE");	
  return 0;
}
