#include <stdio.h>
main(){
	unsigned char nom[15];
	printf("Digite el nombre: ");
	scanf("%s",nom);
	for(int i=0;i<15;i++){
		switch(nom[i]){
			case 'a':
				nom[i]='A';
				break;
			case 'e':
				nom[i]='E';
				break;
			case 'i':
				nom[i]='I';
				break;
			case 'o':
				nom[i]='O';
				break;
			case 'u':
				nom[i]='U';
				break;
			case 'A':
				nom[i]='a';
				break;
			case 'E':
				nom[i]='e';
				break;
			case 'I':
				nom[i]='i';
				break;
			case 'O':
				nom[i]='o';
				break;
			case 'U':
				nom[i]='u';
				break;
		}
	}
	printf("%s",nom);
	return 0;
}
