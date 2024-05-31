#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
	unsigned char c;
		setlocale(LC_CTYPE, "Spanish");
	printf("Introduzca un caracter: ");
	scanf("%c",&c);
	if(c>=65 && c<=90){
		printf("Es una letra mayuscula %c, %d \n",c,c);
	}else{
		if(c>=97 && c<=122){
		printf("Es una letra minuscula %c, %d \n",c,c);
	}else{
		if(c==164){
			printf("Es una letra minuscula %c \n",c);
		}else{
			 if(c==165){
			printf("Es una letra mayuscula %c \n",c);
		}else{
				printf("El caracter introducido no es una letra, %c, %d \n",c,c);		}
			
		}
	}
	}
	system("PAUSE");
	return 0;
}
