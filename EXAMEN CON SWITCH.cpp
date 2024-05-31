/*Nombre del Programa: Examen 
Elaboró: N0eil Otniel Moreno Rivera       No Lista:  20
Fecha: 14102020
Descripción: Áreas y volumenes de un cubo, paralelepipedo recto regular, cilindro recto crcular, cono recto circular */

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
int main() 
{
	int O;
	float LC, LP1, LP2, LP3, LI, RCI, RCO, HCI, HCO, AC, APP, ACI, ACO, VC, VP,VCO, VCI, DCI, DCO;
	system("cls");
	printf("Menu para optener el volumen de figuras geometricas\n");
	printf("1. Cubo\n");
	printf("2. Paralelepipedo recto rectuangular\n");
	printf("3. Cilindro recto circular\n");
	printf("4. Cono recto circular\n");
	scanf("%d", &O);
	switch(O){
		case 1:
		printf("Dame el valor de un lado:");
		scanf("%f", &LC);
		AC = 6 * pow(LC,2);
	    VC = pow(LC,3);
	    printf("El area del cubo es: %.2f y su volumen es: %.2f\n", AC, VC);
	    break;
	    case 2:
	    printf("Ingrese el valor del lado 1:");
	    scanf("%f", &LP1);
	    printf("Ingrese el valor del lado 2:");
	    scanf("%f", &LP2);
	    printf("Ingrese el valor del lado 3:");
	    scanf("%f", &LP3);
	    APP = (2 * LP1 * LP2) + (2 * LP1 * LP3) + (2 * LP2 * LP3);
	    VP = LP1 * LP2 * LP3;
	    printf("El area del paralelepipedo es: %.2f y su volumen es: %.2f\n", APP, VP);
	    break;
	    case 3:
	    printf("Dame el valor del radio:");
	    scanf("%f", &RCI);
	    printf("Dame el valor de la altura:");
	    scanf("%f", &HCI);
	    ACI = (2 * M_PI * pow(RCI,2) )+ (2 * M_PI * HCI);
	    VCI = M_PI * pow(RCI,2) * HCI;
	    printf("El area del cilindro recto es: %.2f y su volumen es: %.2f\n", ACI, VCI);
	    break;
		case 4:
	    printf("Dame el valor del radio:");
	    scanf("%f", &RCO);
	    printf("Dame el valor de la altura inclinada:");
	    scanf("%f", &LI);
	    printf("Dame el valor de la altura:");
	    scanf("%f", &HCO);
	    ACO = (M_PI * pow(RCO,2) )+ (M_PI * RCO * LI);
	    VCO = 1/2 * M_PI * pow(RCO,2) * HCO;
	    printf("El area del cono recto es: %.2f y su volumen es: %.2f\n", ACO, VCO);
	    break;
	    default: printf("\nLa opcion que escojiste no existe\n");	
    return 0; 
    system("PAUSE");
	}
}
