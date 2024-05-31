/*Nombre del Programa: 
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 13/11/2020
Descripción: */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_CTYPE, "Spanish");
	int x[15], i, cont_pos, cont_neg, cont_cer, suma_pos, suma_neg;
	suma_pos=0;
	suma_neg=0;
	cont_pos=cont_neg=cont_cer=0;
	for(i=0; i<=14; i++){
		printf("\nIntroduzca el número:%d\n",i+1);
		scanf("%d",&x[i]);
		if(x[i>0]){
			cont_pos++;
			suma_pos= suma_pos+ x[i];
		}
		else if(x[i]<0){
			cont_neg++;
			suma_neg=suma_neg+x[i];
		}
		else {
			cont_cer++;
		}
	}
	printf("\n La cantidad de números positivos es: %d", cont_pos);
	printf("\n La cantidad de números negativos es: %d", cont_neg);
	printf("\n La cantidad de ceros es: %d", cont_cer);
	printf("\n La suma de los números postivos es: %d",suma_pos);
	printf("\n La suma de los números negativos es: %d\n",suma_neg);
	system("PAUSE");
	return 0;
}
