#include <stdio.h>
main(){int i;
	unsigned char fecha[11];
	printf("Digite una fecha en el formato DD/MM/YYYY\n");
	scanf("%s",fecha);
	if(fecha[3]=='0' && fecha[4]=='1'){
		printf("Enero");
	}
	if(fecha[3]=='0' && fecha[4]=='2'){
		printf("febrero");
	}
	if(fecha[3]=='0' && fecha[4]=='3'){
		printf("marzo");
	}
	if(fecha[3]=='0' && fecha[4]=='4'){
		printf("abril");
	}
	if(fecha[3]=='0' && fecha[4]=='5'){
		printf("mayo");
	}
	if(fecha[3]=='0' && fecha[4]=='6'){
		printf("junio");
	}
	if(fecha[3]=='0' && fecha[4]=='7'){
		printf("julio");
	}if(fecha[3]=='0' && fecha[4]=='8'){
		printf("septiempre");
	}if(fecha[3]=='0' && fecha[4]=='9'){
		printf("agosto");
	}if(fecha[3]=='1' && fecha[4]=='0'){
		printf("octubre");
	}if(fecha[3]=='1' && fecha[4]=='1'){
		printf("noviembre");
	}if(fecha[3]=='1' && fecha[4]=='2'){
		printf("diciembre");
	}
	return 0;
}
