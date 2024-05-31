#include <stdio.h>
#include <conio.h>
main()
{
printf("Ejercicio resuelto con While\n");
int i=2, s=0;
for(i==2;i<=50;i==i+2;){
	printf("La serie de numeros pares entre 1 y 50 son:\n");
	printf("%d \n",i);
	s= s + i;
	i= i + 2;
	printf("la sumatoria es: \n");
	printf("%d\n",s);
}
getch(); return 0;
}
