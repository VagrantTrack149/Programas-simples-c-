#include <stdio.h>  
#include <stdlib.h> 
#include<locale.h>
main(){
	int opcion;
	int n, m, c;
	float v;
	setlocale(LC_CTYPE, "Spanish");
	do{
	
	printf("Elige el programa a realizar");
	printf("\n 1. Solicitar el usuario dos n�meros e imprimir el n�mero mayor");
	printf("\n 2. Solicitar el usuario tres n�meros e imprimir el n�mero menor");
	printf("\n 3. Solicitar al usuario la altura y la base de un tri�ngulo y calcular el �rea del mismo.");
	printf("\n 4. Salir.\n");
	scanf("%d", &opcion);
	
switch(opcion)
	{
	case 1:
		printf("Digite el primer n�mero: ");
		scanf("%d", &n);
		printf("Digite el segundo n�mero : ");
		scanf("%d", &m);
		if(n<m){
			printf("�l n�mero mayor es: %d\n", m);
		}else{
			printf("�l n�mero mayor es: %d\n", n);
		}
		
	break;
	case 2: 
		printf("Digite el primer n�mero: ");
		scanf("%d", &n);
		printf("Digite el segundo n�mero : ");
		scanf("%d", &m);
		printf("Digite el tercer n�mero : ");
		scanf("%d", &c);
		if(n<m){
			printf("�l n�mero menor es: %d\n", m);
		}else{if(n>c){
		
			printf("�l n�mero menor es: %d\n", c);
		}else{
			printf("�l n�mero menor es: %d\n", n);
		}
		}
	break;
	case 3: 
		printf("Digite la altura del triangulo: ");
		scanf("%d", &n);
		printf("Digite la base: ");
		scanf("%d", &m);
		v=(n*m)/2.0;
		if(n<0 || m<0){
			printf("No existen �reas negativas, digite n�meros positivos.\n");
		}else{
		printf("�l �rea es: %0.2f\n", v);}	
		break;
	case 4:
		printf("\n El programa se cerrar�\n");
		break;
	default: 
		printf("\n El digito que introdujo no esta en la lista\n");
	}
}while(opcion!=4);
}
