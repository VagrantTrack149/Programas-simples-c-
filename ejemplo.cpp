
#include <stdio.h>
#include <math.h>

int main(){
    int n,a,b;
    float suma,c;
    suma=0;
   
    printf("Numero de terminos a mostrar en pantalla:");
    scanf("%d",&n);
    printf("Terminos de la primera sucesion:\n ");
    for(a=1;a<=n;a++)
        for(b=1;b<=a;b++){
            printf(" 1/%d ",a);
            c=a;
            suma=(suma+1/c);
            printf("%f",suma);
        }
    printf("\nLa suma de todos los terminos de la sucesion valen: %f", suma);
   
    suma=0;
    printf("\n\nTerminos de la segunda sucesion:\n ");
    for(a=1;a<=n;a++)
    {
        c=a;
        printf("  %d^(%d+1)/(%d+1)  ",a,a,a);
        suma=suma+(exp((c+1)*log(c))/(c+1));
        printf("(%f)",suma);
    }
    printf("\nLa suma de todos los terminos de la sucesion valen: %f", suma);
    scanf("");
}
