/*Nombre del Programa: HORAS PAGADAS
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 7/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA EL PAGO A RECIBIR POR HORAS TRABAJADAS*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>      
int main() 
{
	float PN, HE, PE, PT, PD, HT, TN;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA EL PAGO A RECIBIR POR HORAS TRABAJADAS");
	printf("\n Introduzca las horas trabajadas durante la semana: ");
    scanf("%f",&HT); 
	printf("\n Introduzca la tarifa que cobra por hora: ");
    TN>0;
	scanf("%f",&TN); 
    if (HT>40)
    {
    	HE=HT-40;
    	PE=TN*1.2*HE;
    	PN=(HT-HE)*TN;
    	PT=PN+PE;
    	printf("Su pago total es: %0.3f", PT);
	}
	else
	{
		if (HT>=30 && HT<=40)
		{
			PN=HT*TN;
			printf("Su pago total es: %0.3f", PN);
		 } 
		 else
		 {
		 	PN=HT*TN;
		 	PD=PN*0.88;
		 	printf("Supago total es: %0.3f", PD);
		 }
	}
	printf("\n\n\n");	
	system("PAUSE");
    return 0; 
}

