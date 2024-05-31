#include <stdio.h>
#include <conio.h>
main()
{
int num, suma, prod;
suma=0;
prod=1;
while (suma<=50 || prod<=150)
{
printf("dame un número entero: \n");
scanf("%d",&num);}
if (num%2==0)
suma=suma+num;
else{
prod=prod * num;
}
printf("La suma es: %d\n",suma);
printf("El producto es: %d", prod);
getch(); return 0;
}
