#include <stdio.h>
main(){
	int matriz[2][2],matriz2[2][2],mult[2][2];
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite el valor de la primer matriz [%d][%d]:\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite el valor de la segunda matriz en [%d][%d]:\n",i,j);
			scanf("%d",&matriz2[i][j]);
		}
	}
	for(k=0;k<2;k++){
		for(i=0;i<2;i++){
			int suma=0;
			for(j=0;j<2;j++){
				suma+=matriz[i][j]*matriz2[j][k];
			}
			mult[i][k]=suma;
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",mult[i][j]);
		}
	printf("\n");
	}
	return 0;
}
