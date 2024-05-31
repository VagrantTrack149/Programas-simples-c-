#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
		unsigned char no[15], ap[15];
		unsigned char nomcomp[50];
		int size;
		printf("Digite un nombre\n");
		scanf("%s",no);
		printf("Digite un apellido\n");
		scanf("%s",ap);
		printf("%s\n",no);
		printf("%s\n",ap);
		for(int i=0;i<=15;i++){
			printf("%c\t",no[i]);
			printf("%c\t",ap[i]);
		}
		size=strlen(ap);
		printf("\nEl tamaño es: %d",size);
		strcpy(nomcomp,no);
		strcat(nomcomp,ap);
		printf("%s",nomcomp);
		/*strcpy(s1,s2) Copia cadedas
		strcat(s1,s2) Concatena
		strlen(s1) Regresa longitud de una cadena*/
		system("PAUSE");
		return 0;
}
