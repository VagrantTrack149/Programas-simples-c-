#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main(){
	int i,inicio=0,fin;
	unsigned char pali[20];
	printf("Digite la palabra\n");
	scanf("%s",pali);
	int log=strlen(pali);
	for(fin=log-1;pali[fin]==pali[inicio] && fin>=0;inicio++,fin--);
		if(inicio==log){
			printf("Palindromo\n");
		}else{
			printf("No es palindromo\n");
		}
	system("PAUSE");
	return 0;
}
