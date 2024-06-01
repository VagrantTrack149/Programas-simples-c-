#include <stdio.h>
main(){
	int i,j,p,k;
	int x,y,w,f;
	int A[3][3],B[3][3],C[3][3];
	printf("Digite x: \n");
	scanf("%d",&x);
	printf("Digite y: \n");
	scanf("%d",&y);
	printf("Digite f: \n");
	scanf("%d",&f);
	printf("Digite w: \n");
	scanf("%d",&w);
	A[0][1]=x;
	A[1][0]=y;
	A[1][2]=w;
	A[2][0]=f;
	A[0][0]=1;
	A[0][2]=4;
	A[1][1]=9;
	A[2][1]=5;
	A[2][2]=2;
	B[0][0]=x;
	B[0][1]=3;
	B[0][2]=w;
	B[1][0]=2;
	B[1][1]=9;
	B[1][2]=f;
	B[2][0]=y;
	B[2][1]=5;
	B[2][2]=2;
	C[0][0]=1;
	C[0][1]=7;
	C[0][2]=f;
	C[1][0]=w;
	C[1][1]=9;
	C[1][2]=y;
	C[2][0]=1;
	C[2][1]=x;
	C[2][2]=2;
	printf("A:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",A[i][j]);
		}
	printf("\n");
	}
	printf("B:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",B[i][j]);
		}
	printf("\n");
	}
	printf("C:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",C[i][j]);
		}
	printf("\n");
	}
	int result[3][3];
	printf("1.Suma A y B\n");
	printf("2.Resta B y C\n");
	printf("3.Multiplicar A y C\n");
	printf("4.Imprimir Diagonal de matriz A\n");
	printf("5.Salir\n");
	scanf("%d",&p);
	switch(p){
		case 1:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					result[i][j]=A[i][j]+B[i][j];
				}
			}
				printf("Suma:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
				printf("%d\t",result[i][j]);
					}
					printf("\n");
				}
			break;
		case 2:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					result[i][j]=B[i][j]-C[i][j];
				}
			}
				printf("Resta:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
				printf("%d\t",result[i][j]);
					}
					printf("\n");
				}
			break;
		case 3:
			for(k=0;k<3;k++){
				for(i=0;i<3;i++){
				int suma=0;
					for(j=0;j<3;j++){
				suma+=A[i][j]*C[j][k];
				}
				result[i][k]=suma;
				}
			}
			printf("Multi:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
				printf("%d\t",result[i][j]);
					}
					printf("\n");
				}
			break;
		case 4:
			A[0][1]=0;
			A[0][2]=0;
			A[1][0]=0;
			A[1][2]=0;
			A[2][0]=0;
			A[2][1]=0;
			printf("A:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",A[i][j]);
				}
					printf("\n");
			}
			break;
		case 5:
			printf("Saliendo...\n");
			break;
		default: printf("Saliendo \n");
	}
	return 0;
}
