#include <stdio.h>
#include <math.h>
main(){
	int x,y,w,f;
	int A[3][3];
	int det1,det2,det3,det;
	printf("Digite x: \n");
	scanf("%d",&x);
	printf("Digite y: \n");
	scanf("%d",&y);
	printf("Digite f: \n");
	scanf("%d",&f);
	printf("Digite w: \n");
	scanf("%d",&w);

	int i,tot,cont,j;
	cont=1;
	tot=1;
		while(cont<=w)
		{
		 tot = tot * cont;
		 cont++;
		}
	
	A[0][0]=1;
	A[0][1]=x+3;
	A[0][2]=4;
	A[1][0]=pow(y,2);
	A[1][1]=9;
	A[1][2]=tot;
	A[2][0]=f-2;
	A[2][1]=5;
	A[2][2]=2;
		for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",A[i][j]);
				}
					printf("\n");
			}
	det1=(A[0][0])*((A[1][1]*A[2][2])-(A[2][1]*A[1][2]));
	det2=(A[0][1])*((A[1][0]*A[2][2])-(A[2][0]*A[1][2]));
	det3=(A[0][2])*((A[1][0]*A[2][1])-(A[2][0]*A[1][1]));
	
	det=det1 -det2 + det3;
	printf("El determinate es: %d\n",det);
	return 0;
}
