/*Nombre del programa: Calculadora de la paga de un trabajador
Elaboró: Neil Otniel Moreno Rivera No.L: 20
Descripción: Calcula la paga de un trabajador */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
	setlocale (LC_CTYPE,"Spanish");
	float horas,paga_total ;
	int opcion;
    system("cls");
	printf("***Menú de trabajadores***\n");
	printf("Opcion 1 ---- Intendencia $35\n");
	printf("Opcion 2 --- Asistente %50\n");
	printf("Opcion 3---- Administrativo $80 \n");
	printf("Opcion 4---- Directivo %120\n");
	printf("Opcion 5---- Gerente %150 \n");
	printf("Elige una opción, por favor\n");
	scanf("%d", &opcion);
	switch(opcion){
		case 1: 
		    printf("Ingrese el total de horas trabajadas\n");
		    scanf("%f", &horas);
		    if (horas>0){
		    paga_total=horas*35;
            printf("Su pago total será: %f \n",paga_total);
            printf("\n\n");
            }
            else (horas<0);{
            printf("No hay horas trabajadas negativas");
            printf("\n\n");
            }
			break;
        case 2:
		    printf("\nIngrese el total de horas trabajadas\n");
		    scanf("%f", &horas);
		    if (horas>0){
		    paga_total=horas*50;
            printf("\nSu pago total será: %f",paga_total);
            printf("\n\n");
            }
            else (horas<0);{
            printf("No hay horas trabajadas negativas");
            printf("\n\n");
            }
            break;
        case 3: 
		    printf("\nIngrese el total de horas trabajadas\n");
		    scanf("%f", &horas);
		    if (horas>0){
		    paga_total=horas*80;
            printf("\nSu pago total será: %f",paga_total);
            printf("\n\n");
            }
            else (horas<0);{
            printf("No hay horas trabajadas negativas");
            printf("\n\n");
            }
            break;
        case 4:
		    printf("\nIngrese el total de horas trabajadas\n");
		    scanf("%f", &horas);
		    if (horas>0){
		    paga_total=horas*120;
            printf("\nSu pago total será: %f",paga_total);
            printf("\n\n");
            }
            else (horas<0);{
            printf("No hay horas trabajadas negativas");
            printf("\n\n");
            }
            break;
        case 5:
		    printf("\nIngrese el total de horas trabajadas\n");
		    scanf("%f", &horas);
		    if (horas>0){
		    paga_total=horas*150;
            printf("\nSu pago total será: %f",paga_total);
            printf("\n\n");
            }
            else (horas<0);{
            printf("No hay horas trabajadas negativas");
            printf("\n\n");
            }
            break;       
      default: printf("Solo se deben ingresar una de estas opciones (1),(2),(3),(4),(5)"); 
	  printf("\n\n");  
	}
	system("PAUSE");	
    return 0;
}
