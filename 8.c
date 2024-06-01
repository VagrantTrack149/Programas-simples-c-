#include <stdio.h> 
main()
	{
	int i,pro,k,n,m;
	pro=1;
		printf("Digite el maximo de la sumatoria: \n");
		scanf("%d",&n);
		i=1;
		printf("El numero máximo de la multiplicatoria es %d\n",n+4);
		int suma=0;
		if(n>0){
		for(i=1;i<=n;i++){
			suma+=(i+n)*(i+n);
			}
		n=n+4;
		for(i=1;i<=n;i++){
			pro*=(i+n);
		}
		suma=suma+pro;
		printf("El resultado final es: %d",suma);}
		else{
			printf("Digite numeros validos\n");
		}
		return 0;
	}
