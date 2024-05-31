#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_CTYPE, "Spanish");
	int i, n, par=0, imp=0,mayor,j;
	printf(" ¿De cuantos números va a querer realizar las operaciones?(Con un maximo de 30 números por colocar)\n ");
	scanf("%d",&n);
	int U[n];
	do{
		printf("Ingrese numero: ", i);
		scanf("%d", &U[i]);
		if(U[i]>mayor){
			mayor=U[i];
			j++;
		}
		if(U[i]%2==0){
			par++;
		}
		if(U[i]%2!=0){
			imp++;
		}
		i++;
	}while(i<n);
	printf("La cantidad de números pares es: %d\n", par);
	printf("La cantidad de números impares es: %d\n", imp);
	printf("La cantidad mayor introducida es: %d\n",mayor);
	printf("Y las veces que se repite son: %d\n",j);	}
