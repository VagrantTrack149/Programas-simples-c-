#include <stdio.h>
#include <conio.h>
int suma( );
int producto ( );
main(){ 
int opc;
printf ("�Qu� deseas hacer?\n");
printf ("1. Suma de dos n�meros\n");
printf ("2. Producto de dos n�meros\n");
scanf ("%d",&opc);
if (opc == 1) suma ( );
else producto( );
getch();
return 0;
}
int producto( ) { int n1, n2, prod;
printf ("Dame el primer n�mero entero: ");
scanf("%d",&n1);
printf("Dame el segundo n�mero entero ");
scanf("%d",&n2);
prod= n1 * n2;
printf ("La multiplicaci�n es: %d",prod);
}
int suma( )
{
int n1, n2,suma;
printf ("Dame el primer n�mero entero: ");
scanf ("%d",&n1);
printf ("Dame el segundo n�mero entero: ");
scanf ("%d",&n2);
suma = n1 + n2;
printf ("La suma es: %d",suma);
}
