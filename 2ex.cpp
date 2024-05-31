/*2*/

#include "stdio.h"
#include "locale.h"
#include "string.h"

int main(void)
{
	setlocale(LC_CTYPE, "Spanish");
	unsigned char clave[14], nombre[11], a_pat[11], a_mat[11], dia[3], mes[3], year[5], estado[4];
	int size,i,h;
	h=0;
	
	printf("Dame tu nombre: ");
	scanf("%s", nombre);
	
	/*Validar nombre*/
	size= strlen(nombre);
	
	for(i=0; i<size; i++)
	{
		switch(nombre[i])
		{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
		    case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
		    case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
		    case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
		    case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
			h=1+h;	
			break;	
		}	
	}
	if(size==h)
	{
		printf("Nombre válido\n");
		clave[2] = nombre[0];
	}
	else
	{
		printf("Nombre no válido\n");
	}
	
	/*Validar apellido paterno*/
	printf("\nDame tu apellido paterno: ");
	scanf("%s", a_pat);
	
	h=0;
	size= strlen(a_pat);
	
	for(i=0; i<size; i++)
	{
		switch(a_pat[i])
		{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
		    case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
		    case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
		    case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
		    case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
			h=1+h;	
			break;	
		}	
	}
	
	if(size==h)
	{
		printf("Apellido válido\n");
		clave[0] = a_pat[0];
	}
	else
	{
		printf("Apellido no válido\n");
		
	}
	
	/*Validar apellido materno*/
	printf("\nDame tu apellido materno: ");
	scanf("%s", a_mat);
	
	h=0;
	size= strlen(a_mat);
	
	for(i=0; i<size; i++)
	{
		switch(a_mat[i])
		{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
		    case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
		    case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
		    case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
		    case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
			h=1+h;	
			break;	
		}	
	}
	
	if(size==h)
	{
		printf("Apellido válido\n");
		clave[1] = a_mat[0];
		
	}
	else
	{
		printf("Apellido no válido\n");
	}
	
	/*Validar día*/
	printf("\nDame tu día de nacimiento: ");
	scanf("%s", dia);
	h=0;
	size=strlen(dia);
	
	for(i=0; i<size; i++)
	{
		switch(dia[i])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			h=1+h;
		}
	}
	if(size==h)
	{
		printf("Número válido\n");
		clave[7] = dia[0];
		clave[8] = dia[1];
	}
	else
	{
		printf("Número no válido\n");
	}
	
	/*Validar mes*/
	printf("\nDame tu mes de nacimiento en número: ");
	scanf("%s", mes);
	h=0;
	size=strlen(mes);
	
	for(i=0; i<size; i++)
	{
		switch(mes[i])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			h=1+h;
		}
	}
	if(size==h)
	{
		printf("Número válido\n");
		clave[5] = mes[0];
		clave[6] = mes[1];
	}
	else
	{
		printf("Número no válido\n");
	}
	
	/*Validar año*/
	printf("\nDame tu año de nacimiento: ");
	scanf("%s", year);
	h=0;
	size=strlen(year);
	
	for(i=0; i<size; i++)
	{
		switch(year[i])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			h=1+h;
		}
	}
	if(size==h)
	{
		printf("Número válido\n");
		clave[3] = year[2];
		clave[4] = year[3];
	}
	else
	{
		printf("Número no válido\n");
	}
	
	/*Validar 7 estados*/
	
	printf("\nDame tu estado de nacimiento (abreviado):");
	scanf("%s", estado);
	
	clave[9] = '-';
	clave[10] = estado[0];
	clave[11] = estado[1];
	clave[12] = estado[2];
	
	printf("Su clave de empleado es: %s", clave);
	
	return 0;
}
