#include <stdio.h>
#include <conio.h>
#include <math.h>
int facto( ), pot( );
main(){ 
int opc;
printf ("�Qu� perimetro desea hacer?\n");
printf ("1. Factorial de un n�mero entero\n");
printf ("2. Potencia de un n�mero entero\n");
scanf ("%d",&opc);
switch (opc){
	case 1:
		facto( );
	break;
	case 2:
		pot( );
	break;
	default:printf("Error, vuelva a iniciar");
}
getch();
return 0;
}
int facto( ) { int num,i,fact=1;
printf ("Dame el n�mero al cual hacer factorial: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
	fact=fact*i;
}
printf ("El factorial de %d es: %d",num,fact);
}
int pot( )
{ int num,pote,o;
printf ("Dame el numero entero: ");
scanf ("%d",&num);
printf ("Dame el valor de la potencia: ");
scanf("%d",&pote);
o=pow(num,pote);
printf ("La potencia es: %d",o);
}

