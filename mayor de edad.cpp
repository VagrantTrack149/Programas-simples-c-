#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int numero;
    printf( "\nDigite su edad: ");
    scanf( "%d", &numero );
    if ( numero >= 18 && numero>0)
        printf( "\nEs mayor de edad\n" );
    else
        printf( "\nEs menor de edad\n" );
    system("PAUSE");
    return 0;
}
