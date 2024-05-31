#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int n, m,c;
		printf("Digite el primer número: ");
		scanf("%d", &n);
		printf("Digite el segundo número : ");
		scanf("%d", &m);
		printf("Digite el tercer número : ");
		scanf("%d", &c);
		if(n>m && m>c){
			printf("Orden Descendente: %d, %d, %d\n", n,m,c);
			printf("Orden Ascendente: %d, %d, %d\n", c,m,n);
		}
		if(m>n && n>c){
			printf("Orden Descendente: %d, %d, %d\n", m,n,c);
			printf("Orden Ascendente: %d, %d, %d\n", c,n,m);
		}
		if(c>n && n>m){
			printf("Orden Descendente: %d, %d, %d\n", c,n,m);
			printf("Orden Ascendente: %d, %d, %d\n", m,n,c);
		}
		if(n>c && c>m){
			printf("Orden Descendente: %d, %d, %d\n", n,c,m);
			printf("Orden Ascendente: %d, %d, %d\n", m,c,n);
		}
		if(m>c && c>n){
			printf("Orden Descendente: %d, %d, %d\n", m,c,n);
			printf("Orden Ascendente: %d, %d, %d\n", n,c,m);
		}
    system("PAUSE");
    return 0;
}
