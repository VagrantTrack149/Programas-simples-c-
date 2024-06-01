#include <stdio.h>
#include <math.h>
main(){
	int n,x,i;
	printf("Digite el limite maximo a calcular la sumatoria del cuadrado\n");
	scanf("%d",&n);
	if(n>0){
	for(i=1;i<=n;i++){
		x+=pow(i,2);
	}
	printf("La sumatoria es: %d",x);
	}else{
		printf("Digite numeros validos");
	}return 0;
}
