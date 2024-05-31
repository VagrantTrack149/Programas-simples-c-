#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_CTYPE, "Spanish");
	int n,i,p; 
	printf("Introduzca el total de equipos:	\n");
	scanf("%i",&n);
	printf("Introduzca el total de partidos jugados en la temporada: \n");
	scanf("%d",&p);
	int M[n], pj[p], pg[p], pe[p], pp[p], dg[n],pun[p];
		do{
			printf("Introduzca los partidos ganados del equipo [%d]: ",i);
			scanf("%d",pg);
			printf("Introduzca los partidos empatados del equipo [%d]: ",i);
			scanf("%d",pe);
			printf("Introduzca los partidos perdidos del equipo [%d]: ",i);
			scanf("%d",pp);
			printf("Introduzca la diferencia de goles del equipo [%d]: ",i);
			scanf("%d",dg);
			pun[p]=pg[p]*3+pe[p];
			i++;
			}while(i<n);
	for(i=0;i<n;i++){
		printf("\nEl equipo %i Pj %i, Pg %i, Pe %i Pp %i Dg %i Puntos %i\n",i+1,p,pg[p],pe[p],pp[p],dg[n],pun[p]);
	}
	system("PAUSE");
	return 0;
}
