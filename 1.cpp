#include <stdio.h>
main(){
	unsigned char c=65;
	do{
		printf("Introduce una letra mayuscula o minuscula");
		scanf("%c",&c);
		switch(c){
			case 'a':
				printf("Albuquerque");
			break;
			case 'b':
				printf("brazil");
			break;
			case 'c':
				printf("celaya");
			break;
			case 'd':
				printf("dinamarca");
			break;
			case 'e':
				printf("españa");
			break;
			case 'f':
				printf("francia");
			break;
			case 'g':
				printf("guadalajara");
			break;
			case 'h':
				printf("holanda");
			break;
			case 'i':
				printf("islandia");
			break;
			case 'j':
				printf("jalisco");
			break;
			case 'k':
				printf("kentoky");
			break;
			case 'l':
				printf("Luisiana");
			break;
			case 'm':
				printf("mexico");
			break;
			case 'n':
				printf("nebraska");
			break;
			case 'o':
				printf("ocklajoma");
			break;
			case 'p':
				printf("polonia");
			break;
			case 'q':
				printf("qatar");
			break;
			case 'r':
				printf("rusia");
			break;
			case 's':
				printf("suecia");
			break;
			case 't':
				printf("ranzana");
			break;
			case 'u':
				printf("urvekiztan");
			break;
			case 'v':
				printf("veracruz");
			break;
			case 'w':
				printf("washinton");
			break;
			case 'x':
				printf("xochimilco");
			break;
			case 'y':
				printf("yucatan");
			break;
			case 'z':
				printf("zacatecas");
			break;
			case 'A':
				printf("Alejandra");
			break;
			case 'B':
				printf("Blanca");
			break;
			case 'C':
				printf("Carmen");
			break;
			case 'D':
				printf("Dante");
			break;
			case 'E':
				printf("Esteban");
			break;
			case 'F':
				printf("Fabian");
			break;
			case 'G':
				printf("Gabriela");
			break;
			case 'H':
				printf("Hilaria");
			break;
			case 'I':
				printf("Ismael");
			break;
			case 'J':
				printf("Juan");
			break;
			case 'K':
				printf("Kevin");
			break;
			case 'L':
				printf("Luisa");
			break;
			case 'M':
				printf("Mariana");
			break;
			case 'N':
				printf("Neil");
			break;
			case 'O':
				printf("Oscar");
			break;
			case 'P':
				printf("Pablo");
			break;
			case 'Q':
				printf("quan");
			break;
			case 'R':
				printf("Raul");
			break;
			case 'S':
				printf("Sauk");
			break;
			case 'T':
				printf("Tatiana");
			break;
			case 'U':
				printf("Uriel");
			break;
			case 'V':
				printf("Victor");
			break;
			case 'W':
				printf("Wendy");
			break;
			case 'X':
				printf("xochitl");
			break;
			case 'Y':
				printf("Yahir");
			break;
			case 'Z':
				printf("Zacarias");
			break;
		}
	}while(!(((c>=65)&&(c<=90)) || ((c>=97)&&(c<=122))));
	return 0;
}
