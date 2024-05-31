/*Nombre del Programa: Examen 
Elaboró: N0eil Otniel Moreno Rivera       No Lista:  20
Fecha: 14102020
Descripción: Áreas y volumenes de un cubo, paralelepipedo recto regular, cilindro recto crcular, cono recto circular */

#include <stdio.h>  
#include <stdlib.h> 
main() 
{
	float LC, LP1, LP2, LP3, LCI, LCO, RCI, RCO, HCI, HCO, AC, APP, ACI, ACO, VC, VP,VCO, VCI, DCI, DCO;
	printf("\n Introduzca el valor de el lado del cubo: ");
    scanf("%f",&LC);
    AC = 6*LC*LC;
    VC = LC*LC*LC;
    printf("\n Introduzca el valor del lado 1 del paralelepipedo recto rectangular: :");
    scanf("%f",&LP1);
    printf("\n Introduzca el valor del lado 2 del paralelepipedo recto rectangular: :");
    scanf("%f",&LP2);
    printf("\n Introduzca el valor del lado 3 del paralelepipedo recto rectangular: :");
    scanf("%f",&LP3);
    APP = 2*LP1*LP2+2*LP1*LP3+2*LP2*LP3;
    VP = LP1*LP2*LP3;
    printf("\n Introduzca el radio del cilindro recto circular: ");
    scanf("%f",&RCI);
    printf("\n Introduzca la altura del cilindro recto circular: ");
    scanf("%f",&HCI);
    ACI = 2*3.1416*RCI*RCI+2*3.1416*RCI*HCI;
    VCI = 3.1416*RCI*RCI*HCI;
    printf("\n Introduzca el radio del cono recto circular: ");
    scanf("%f",&RCO);
    printf("\n Introduzca la altura del cono recto circular: ");
    scanf("%f",&HCO);
    ACO = 3.1416*RCO*RCO+3.1416*RCO*HCO;
    VCO = (1.0/3.0)*3.1416*RCO*RCO*HCO;
	printf("\n El area del cubo es: %0.3f", AC);
	printf("\n El volumen del cubo es: %0.3f", VC);
	printf("\n El area del paralelepipedo recto rectangular es: %0.3f", APP);
	printf("\n El volumen del paralelepipedo recto rectangular es: %0.3f", VP);
	printf("\n El area del cilindro recto circular es: %0.3f", ACI);
	printf("\n El volumen del cilindro recto circular es: %0.3f", VCI);
	printf("\n El area del cono recto circular es: %0.3f", ACO);
	printf("\n El volumen del cono recto circular es: %0.3f", VCO);	
    return 0; 
}
