#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int MI[3][3], i, j;
	setlocale(LC_CTYPE, "Spanish");
	printf("Impresión de una matriz de identidad\n");
	for(i=0; i<=2; i++){
		for(j=0;j<=2;j++){
			if(i==j){
				MI[i][j]=1;
			}
			else{
				MI[i][j]=0;
			}
			printf(" %d ",MI[i][j]);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
