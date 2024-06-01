#include <stdio.h>
#include <string.h>
main(){
	unsigned char p[100];
	printf("Digite una frase\n");
	fgets(p,100,stdin);
	int i,h=0, size=strlen(p);
	for(i=0;i<size;i++){
		if(p[i]==32){
			h=h+1;
		}
	}
	h+=1;
	printf("La cadena tiene %d palabras\n",h);
	return 0;
}
