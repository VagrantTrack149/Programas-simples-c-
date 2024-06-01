#include <stdio.h> 
main()
	{
	int i,tot,cont;
	cont=1;
	tot=1;
		printf("Dame el numero para el factorial: ");
		scanf("%d",&i);
		if(i>0){
		while(cont<=i)
		{
		 tot = tot * cont;
		 cont++;
		}
		tot=10+tot;
		 printf("El factorial de %d + 10 es: %d",i,tot);}
		 else{
		 	printf("Digite numeros validos");
		 }
		return 0;
}
