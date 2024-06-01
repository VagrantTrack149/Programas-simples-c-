#include <stdio.h> 
main()
	{
	int m;
	int i,pro,k,n;
	pro=1;
		printf("Digite el maximo de la sumatoria: \n");
		scanf("%d",&m);
		i=1;
		k=1;
		printf("Digite el numero para el productorio: ");
		scanf("%d",&n);
		int suma=0;
		if(m>0 && n>3){
			n=n-3;
		for(i=1;i<=m;i++){
			for(n=1;n<=k;n++){
			pro*=(i*n)+2;
			}
			suma+=pro+3;
			}
		printf("El resultado final es: %d",suma);}
		else{
			printf("Digite numeros validos\n");
		}
		return 0;
	}
