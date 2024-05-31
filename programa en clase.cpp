#include <stdio.h>
#include <conio.h>
main()
{
printf("Ejercicio resuelto con Do-While")
int i=2, s=0;
printf("La serie de numeros pares entre 1 y 50 son:\n");
do
{
printf("%d \n",i);
s= s + i;
i= i + 2;
}
while ( i <= 50 );
printf("la sumatoria es: \n");
printf("%d\n",s);
getch(); return 0;
}
