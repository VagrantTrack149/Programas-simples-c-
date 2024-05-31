#include <stdio.h>
main(){
	int m[3][3],m1[3][3],m2[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Dame el valor [%d][%d]: ",i,j);	
			scanf("%d",&m[i][j]);
		}}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d ",m[i][j]);
		}printf("\n");}
		printf("\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		m1[i][j]=m[i][j];
		m2[i][j]=m[i][j];
		}}
		m1[1][0]=0;
		m1[2][0]=0;
		m1[2][1]=0;
		m2[0][1]=0;
		m2[0][2]=0;
		m2[1][2]=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d ",m1[i][j]);
	}printf("\n");}
	printf("\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d ",m2[i][j]);
	}printf("\n");}
	return 0;
}
