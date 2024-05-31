#include <stdio.h>
#include <conio.h>
int trian( ), cuad( ), rec( );
main(){ 
int opc;
printf ("¿Qué perimetro desea calcular?\n");
printf ("1. Triangulo equilatero\n");
printf ("2. Cuadrado\n");
printf ("3. Rectangulo\n");
scanf ("%d",&opc);
switch (opc){
	case 1:
		trian( );
	break;
	case 2:
		cuad( );
	break;
	case 3:
		rec( );
	break;
	default:printf("Error, vuelva a iniciar");
}
getch();
return 0;
}
int cuad( ) { int lado, p;
printf ("Dame el lado del cuadrado: ");
scanf("%d",&lado);
p= lado*4;
printf ("El perimetro del cuadrado es: %d",p);
}
int trian( )
{
int lado,p;
printf ("Dame el lado del triangulo: ");
scanf ("%d",&lado);
p=lado*3;
printf ("El perimetro del triangulo es: %d",p);
}
int rec( ){ int lado, base, p;
printf ("Dame el lado del rectangulo: \n");
scanf("%d",&lado);
printf ("Dame la base del rectangulo: \n");
scanf("%d",&base);
p=(2*lado)+ (2*base);
printf ("El perimetro del rectangulo es: %d\n",p);
}
