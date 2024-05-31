#include <stdio.h>
#include <string.h>
	unsigned char nombre[3];
void validar(unsigned char nombre[3]){
	length=strlen(nombre);
	for(int i=0;i<length;i++){
    while(nombre[i]>=0){
        if( isdigit(nombre) ) 
        {
            printf("Es un digito\n");
            break;
        } 
        else 
        {
            printf("Ingrese un numero valido");

        }
    }
}}

main(){
	scanf("%s",nombre);
	validar(nombre);
	printf("%s",nombre);
}
