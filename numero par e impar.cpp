#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int numero;
    printf( "\nDigite un número entero: ");
    scanf( "%d", &numero );
    if ( numero % 2== 0 )
        printf( "\nEl número es par\n" );
    else
        printf( "\n El número es impar\n" );
    system("PAUSE");
    return 0;
}
