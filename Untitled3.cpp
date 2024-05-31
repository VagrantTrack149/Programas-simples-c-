#include <stdio.h>
main(){
	unsigned char ano[5];
	int i, j=0;
	printf("Digite el año en 4 digitos\n");
	scanf("%s",ano);
	for(i=0;i<5;i++){
	if((isdigit(ano[i]))==1){
		j=j+1;
	}else{
		j=j-1;
	}}
	if(j==4){
		printf("El año es valido\n");
	}else{
		printf("El año es invalido\n");
	}
	return 0;
}
