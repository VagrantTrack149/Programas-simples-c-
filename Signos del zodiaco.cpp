/*Nombre del Programa: Zigno del zodiaco
Elabor�: Neil Otniel Moreno Rivera      No Lista:  3
Fecha: 19/10/2020
Descripci�n: PROGRAMA QUE CALCULA EL SIGNO DEL ZODIACO SEG�N EL DIA Y MES*/

#include <stdio.h>  
#include <stdlib.h> 
#include <conio.h>
#include <locale.h>
main() 
{	
	setlocale (LC_CTYPE,"Spanish");
	int dia, mes;
    system("cls"); 
    printf("Introduce el dia de tu nacimiento en d�gitos del (1-31)\n");
	scanf("%d",&dia);
	printf("Introduce tu mes de nacimiento en digitos del (1-12)\n");
	scanf("%d",&mes);
	if (dia>=32 || mes>12){
		printf("Introduzca valores validos\n");
	}
	else {
	
    if (dia<22 && mes==1)
		{
    	printf("Tu signo es Capricornio \n");
		}
	else
		{
    	printf("Tu signo es Acuario\n");
		}
	if (dia<22 && mes==2)
		{
    	printf("Tu signo es Acuario \n");
		}
	else
		{
    	printf("Tu signo es Piscis\n");
		}
	if (dia<22 && mes==3)
		{
    	printf("Tu signo es Piscis \n");
		}
	else
		{
    	printf("Tu signo es Aries\n");
		}
	if (dia<22 && mes==4)
		{
    	printf("Tu signo es Aries \n");
		}
	else
		{
    	printf("Tu signo es Tauro\n");
		}
	if (dia<22 && mes==5)
		{
    	printf("Tu signo es Tauro \n");
		}
	else
		{
    	printf("Tu signo es G�minis\n");
		}
	if (dia<22 && mes==6)
		{
    	printf("Tu signo es G�minis \n");
		}
	else
		{
    	printf("Tu signo es Cancer\n");
		}
	if (dia<22 && mes==7)
		{
    	printf("Tu signo es Cancer \n");
		}
	else
		{
    	printf("Tu signo es Leo\n");
		}
	if (dia<22 && mes==8)
		{
    	printf("Tu signo es Leo \n");
		}
	else
		{
    	printf("Tu signo es Virgo\n");
		}
	if (dia<22 && mes==9)
		{
    	printf("Tu signo es Virgo \n");
		}
	else
		{
    	printf("Tu signo es Libra\n");
		}
	if (dia<22 && mes==10)
		{
    	printf("Tu signo es Libra \n");
		}
	else
		{
    	printf("Tu signo es Escorpi�n\n");
		}
	if (dia<22 && mes==11)
		{
    	printf("Tu signo es Escorpi�n \n");
		}
	else
		{
    	printf("Tu signo es Sagitario\n");
		exit(0);}
	if (dia<22 && mes==12)
		{
    	printf("Tu signo es Sagitario \n");
		}
	else
		{
    	printf("Tu signo es Capricornio\n");
		exit(0);}
}
	
	getch();  
    system("PAUSE");  
    return 0; 
}

