#include <stdio.h> 
#include <stdlib.h>
main()
	{
	int i,pro,k,n;
	pro=1;
		printf("Digite el numero para el productorio: ");
		scanf("%d",&k);
		printf("Digite el valor de i\n");
		scanf("%d",&i);
		if(k>0 && i>0){
		for(n=1;n<=k;n++){
			pro*=(i*n)+2;
		}
		printf("El productorio de %d es: %d",k,pro);}
		else{
			printf("Digite numeros validos\n");
		}
		return 0;
		system("PAUSE");
	}
