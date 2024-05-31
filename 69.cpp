#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
int sepa( );
int matriz ( );
int v;
main(){ 
do{
int opc;
setlocale(LC_CTYPE, "Spanish");
printf ("¿Qué deseas hacer?\n");
printf ("1. Generar aleatoriamente un vector tamaño 20 con números entre 0 y 150, con listas\n");
printf ("2. Matriz de máximo 10x10 para sacar promedios\n");
scanf ("%d",&opc);
if (opc == 1) sepa ( );
else matriz( );
printf("¿Quieres volverlo a intentar?\n");
printf("1 para repetir\n");
printf("2 para cerrar el programa\n");
scanf("%d",&v);}
while(v==1);
getch();
return 1;
}
int sepa( ){
	srand(time(NULL));
	int G[20], i, num, a[20], b[20], u=0, j=0, c[20], h=0;
	printf("Lista general de números aleatorios entre 0 y 150");
	printf("\nEstos números son aleatorios");
	for(i=0; i<20; i++){
		num=rand()%151;
		G[i]=num;
		a[i]=0;
		b[i]=0;
		c[i]=0;
		printf("\nG(%i)=%i", i, num);}
	for(i=0; i<20; i++){
		if(G[i]>=0 && G[i]<=50 ){
			a[u]=G[i];
			u++;}
		else if(G[i]>=51 && G[i]<=100){
			b[j]=G[i];
			j++;}
		else{
			c[h]=G[i];
			h++;} }	
	printf("\n Lista 1, números aleatorios entre el 0 y el 50:");
	for(i=0; i<u; i++){
		printf("\na(%i)=%i", i, a[i]);}
	printf("\nlista 2, números aleatorios entre el 51 y el 101");
	for(i=0; i<j; i++){
		printf("\nb(%i)=%i", i, b[i]);}
	printf("\nLista 3, números aleatorios entre el 101 y el 150");
	for(i=0; i<h; i++){
		printf("\nc(%i)=%i", i, c[i]);}
	printf("\n");
}
int matriz( ){
int matriz[10][10];
int horizontal[10];
int vertical[10];
int fila,columna;
int suma=0;
int i,tam;
	printf("¿Qué tamaño debe de tener la matriz(Máximo 10x10): ");
	scanf("%d",&tam);
	if(tam<=10){
	printf("Introduce los números de la matriz");
	for(fila=0;fila<tam;fila++)
	{
    for(columna=0;columna<tam;columna++)
    {
        printf("Introduce un numero para la posicion %d,%d: ",fila,columna);
        scanf("%d",&matriz[fila][columna]);
    }
	}
	for(fila=0;fila<tam;fila++)
	{
    suma=0;
    for(columna=0;columna<tam;columna++)
    {
        suma+=matriz[fila][columna];
    }
    vertical[fila]=suma/tam;
	}
	for(i=0;i<tam;i++)
	{
    printf("El promedio de la linea[%d] es %d\n",i,vertical[i]);
	}
	for(columna=0;columna<tam;columna++)
	{
    suma=0;
    for(fila=0;fila<tam;fila++)
    {
        suma+=matriz[fila][columna];
    }
    horizontal[columna]=suma/tam;
	}
	for(i=0;i<tam;i++)
	{
    printf("El promedio de la columna[%d] es %d\n",i,horizontal[i]);
	}
}else{
	printf("Vuelvalo a intentar");
}}
