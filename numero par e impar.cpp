#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int numero;
    printf( "\nDigite un n�mero entero: ");
    scanf( "%d", &numero );
    if ( numero % 2== 0 )
        printf( "\nEl n�mero es par\n" );
    else
        printf( "\n El n�mero es impar\n" );
    system("PAUSE");
    return 0;
}
