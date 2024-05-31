/*Nombre del Programa: Examen D:
Elaboró: Neil Otniel Moreno Rivera    No Lista:  20
Fecha: 18/11/2020
Descripción: */
#include<conio.h>
#include<stdio.h>
#include<locale.h>
main()
{
	int d,i,num;
	int number;
    int min,max;
    int sumapa, multim;
    multim=sumapa=1;
	setlocale(LC_CTYPE, "Spanish");
	printf("¿Qué operación desea realizar?");
	printf("\n1.-Inicie con cualquier número positivo, si es par dividir entre 2 y si es impar multiplicar por 3 y aumentar 1. Calcular e imprimir los números enteros positivos repitiendo el proceso hasta llegar a 1.\n");
	printf("\n2.- Sumar los números pares y multiplicar los números impares hasta que la suma sea mayor que n o el producto mayor que m.\n");
	scanf("%i",&d);
	switch (d){
	case 1:
		printf("\ningrese un número: ");
		scanf("%d",&num);
		while(num>1)
 		{
 		if(num%2==0)num=num/2;
 		else num=num*3+1;
 		printf(" \n número= %d", num);
 		} break;
 	case 2:
 	printf("Introduzca el valor de N valor minimo en el rango: ");
    scanf("%d",&min);
    printf("Introduzca el valor de M valor maximo en el rango: ");
    scanf("%d",&max);
    printf("Los numeros impares en el rango indicado son: ");
    for(number = min;number <= max; number++)
         if(number % 2 !=0)
             printf("\n%d",number);
             multim= multim * number ;
             printf("\nMultiplicación de los números impares: %d",multim);
    printf("\nLos numeros pares en el rango indicado son: ");
    for(number = min;number <= max; number++)
         if(number % 2 ==0)
             printf("\n%d",number);
             sumapa= sumapa + number ;
             printf("\n Suma de los números pares: %d", sumapa);
    	break;
 	}
 	getch(); return 0;
}


