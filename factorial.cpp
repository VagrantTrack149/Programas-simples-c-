#include <stdio.h> 
main()
	{
	int i,tot,cont;
	cont=1;
	tot=1;
		printf("Factorial numeronn Dame el numero para el factorial: ");
		scanf("%d",&i);
		while(cont<=i)
		{
		 tot = tot * cont;
		 cont++;
		}
		 printf("El factorial de %d es: %d",i,tot);
		return 0;
	}
