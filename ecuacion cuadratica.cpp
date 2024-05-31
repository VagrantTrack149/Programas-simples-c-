#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main(){
	float a,b,c,r;
	double x,z;
	printf("El programa calcula X, en una ecucación cuadratica de la forma\n");
	printf("ax^2+bx+c=0\n");
	printf("Introduzca a\t");
	scanf("%f",&a);
	printf("Introduzca b\t");
	scanf("%f",&b);
	printf("Introduzca c\t");
	scanf("%f",&c);
	r=sqrt(pow(b,2)-(4.0*a*c));
	if(r>=0 && a!=0){
		x=(-b+r)/(2*a);
		z=(-b-r)/(2*a);
		printf("Valor positivo %0.3f\n",x);
		printf("Valor negativo %0.3f\n",z);
	}else{
		printf("El valor no se puede calcular\n");
	}
	system("PAUSE");
}
