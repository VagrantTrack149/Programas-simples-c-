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
	printf("\n 1. Solicitar el usuario dos números e imprimir el número mayor");
	printf("\n 2. Solicitar el usuario tres números e imprimir el número menor");
	printf("\n 3. Solicitar al usuario la altura y la base de un triángulo y calcular el área del mismo.");
	printf("\n 4. Salir.\n");
	scanf("%d", &opcion);
	
switch(opcion)
	{
	case 1:
		printf("Digite el primer número: ");
		scanf("%d", &n);
		printf("Digite el segundo número : ");
		scanf("%d", &m);
		if(n<m){
			printf("Él número mayor es: %d\n", m);
		}else{
			printf("Él número mayor es: %d\n", n);
		}
		
	break;
	case 2: 
		printf("Digite el primer número: ");
		scanf("%d", &n);
		printf("Digite el segundo número : ");
		scanf("%d", &m);
		printf("Digite el tercer número : ");
		scanf("%d", &c);
		if(n<m){
			printf("Él número menor es: %d\n", m);
		}else{if(n>c){
		
			printf("Él número menor es: %d\n", c);
		}else{
			printf("Él número menor es: %d\n", n);
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
			printf("No existen áreas negativas, digite números positivos.\n");
		}else{
		printf("Él área es: %0.2f\n", v);}	
		break;
	case 4:
		printf("\n El programa se cerrará\n");
		break;
	default: 
		printf("\n El digito que introdujo no esta en la lista\n");
	}
}while(opcion!=4);
}
