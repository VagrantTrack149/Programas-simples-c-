#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    int min,max;
    int sumapa, multim;
    printf("Introduzca el valor de N valor minimo en el rango: ");
    scanf("%d",&min);
    printf("Introduzca el valor de M valor maximo en el rango: ");
    scanf("%d",&max);
    printf("Los numeros impares en el rango indicado son: ");
    for(number = min;number <= max; number++)
         if(number % 2 !=0)
             printf("\n%d",number);
             multim=number*number;
             printf("\nMultiplicación de los números impares: %d",multim);
    printf("\nLos numeros pares en el rango indicado son: ");
    for(number = min;number <= max; number++)
         if(number % 2 ==0)
             printf("\n%d",number);
             sumapa=number+number;
             printf("\n Suma de los números pares: %d", sumapa);
			
    getch(); return 0;
}
