/*Nombre del Programa:  Signo Zodiacal
Elabor�: Neil Otniel Moreno Rivera      
Descripci�n: Programa que nos dice el signo zodiacal dependiendo el dia y el mes.
USO DEL CASE*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
#include<locale.h>

main()
{
	setlocale(LC_CTYPE, "Spanish");
int dia,mes;
	
 	 printf("\n\n\nPrograma que menciona tu signo Zodiacal\n\n\n");  
	printf("Escribe tu d�a de nacimiento en digitos del(1-31): ");
	scanf("%i", &dia);
	printf("Escribe tu mes de nacimiento en digitos del(1-12): ");
	scanf("%i", &mes);

	switch(mes)
    {
		case 1: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Capricornio\n");
			}else
			{
				printf("T� signo zodiacal es: Acuario\n");
			}	
		break;
		
		case 2: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Acuario\n");
			}else
			{
				printf("T� signo zodiacal es: Piscis\n");
			}	
		break;
		
		case 3: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Piscis\n");
			}else
			{
				printf("T� signo zodiacal es: Aries\n");
			}	
		break;
		
		case 4: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Aries\n");
			}else
			{
				printf("T� signo zodiacal es: Tauro\n");
			}
		break;
		
		case 5: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Tauro.\n");
			}else
			{
				printf("T� signo zodiacal es: G�minis\n");
			}
		break;
		case 6: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: G�minis\n");
			}else
			{
				printf("T� signo zodiacal es: C�ncer\n");
			}
		break;
		case 7: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: C�ncer\n");
			}else
			{
				printf("T� signo zodiacal es: Leo\n");
			}
		break;
		case 8: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Leo\n");
			}else
			{
				printf("T� signo zodiacal es: Virgo\n");
			}
		break;
		case 9: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Virgo\n");
			}else
			{
				printf("T� signo zodiacal es: Libra\n");
			}
		break;
		case 10: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Libra\n");
			}else
			{
				printf("T� signo zodiacal es: Escorpi�n\n");
			}
		break;
		case 11: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Escorpi�n\n");
			}else
			{
				printf("T� signo zodiacal es: Sagitario\n");
			}
		break;
		case 12: 
			if(dia<22) 
			{
				printf("T� signo zodiacal es: Sagitario\n");
			}else
			{
				printf("T� signo zodiacal es: Capricornio\n");
			}
		break;
		default:
			printf("No existe ese mes\n"); 
		
}
			
 system("PAUSE");
 return 0;
}
