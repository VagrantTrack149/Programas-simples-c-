#include <stdio.h>
main(){
	int matriz[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite el valor [%d][%d]:\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",matriz[i][j]);
		}
	printf("\n");
	}
}
