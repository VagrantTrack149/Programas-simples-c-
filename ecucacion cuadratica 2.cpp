#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main(){
	float a,b,c,r,s;
	double x,z;
	float x1,x2;
	printf("El programa calcula X, en una ecucación cuadratica de la forma\n");
	printf("ax^2+bx+c=0\n");
	printf("Introduzca a\t");
	scanf("%f",&a);
	printf("Introduzca b\t");
	scanf("%f",&b);
	printf("Introduzca c\t");
	scanf("%f",&c);
	s=(pow(b,2)-(4.0*a*c));
	if(s>=0){
		r=sqrt(s);
	if(r>=0 && a!=0){
		x=(-b+r)/(2*a);
		z=(-b-r)/(2*a);
		printf("Valor positivo %0.3f\n",x);
		printf("Valor negativo %0.3f\n",z);
	}else{
		printf("El valor no se puede calcular\n");
		}
	}else{
		s=abs(s);
		x1=(-b/(2*a));
		x2=sqrt(s)/(2*a);
		printf("El valor positivo es: %f + %fi\n",x1,x2);
		printf("El valor negativo es: %f - %fi\n",x1,x2);
	}
	system("PAUSE");
}
