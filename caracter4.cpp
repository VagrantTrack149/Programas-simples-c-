#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
	unsigned char c;
	setlocale(LC_CTYPE, "Spanish");
	printf("Introduzca un caracter para saber si es valido para un correo electronico: ");
	scanf("%c",&c);
	if(c>=65 && c<=90){
		printf("Es una letra mayuscula %c, %d y es valido\n",c,c);
	}else{
		if(c>=97 && c<=122){
		printf("Es una letra minuscula %c, %d  y es valido\n",c,c);
	}else{
		if(c>=48 && c<=57){
			printf("Es un número y es valido\n");
		}else{
			if(c==64 || c==95 || 45){
				printf("El caracter es valido para un correo %c\n ",c);
			}else{
			printf("El caracter introducido no es una letra, %c, %d\n",c,c);		}
		}
	}
	system("PAUSE");
	return 0;
}
}
