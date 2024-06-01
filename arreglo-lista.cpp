#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMENCION 20
#define MAX '\0'
#define MIN '\1'
int generaAzar(int limite){
    int R = rand()% limite + 1;
    return R;}

void llenaNumeros(int * arreglo){
    int x;
    for(x = 0; x < DIMENCION; ++x){
        arreglo[x] = generaAzar(DIMENCION);}}

void ordena(int * arreglo, int tam){
    int i ,j;
    for(i = 0; i < tam; ++i){
        for(j = i + 1; j < tam; ++j){
            if(arreglo[i] > arreglo[j]){
            arreglo[i] = arreglo[i] ^ arreglo[j];
            arreglo[j] = arreglo[i] ^ arreglo[j];
            arreglo[i] = arreglo[i] ^ arreglo[j];}}}}

int obtener_MAXoMIN(const int * arreglo,int tam, char obtener){

    int x;
    int menor = arreglo[0];
    int mayor = arreglo[0];
    for(x = 0; x < tam; ++x){
        if(menor > arreglo[x])
            menor = arreglo[x];
        else if(mayor < arreglo[x])
            mayor = arreglo[x];
    }
    if(obtener)
        return menor;
    else
        return mayor;}

int sumaTotal(const int * arreglo, int tam){
    int i;
    int suma = 0;
    for(i = 0; i < tam; ++i){
        suma += arreglo[i];}
    return suma;}

float promedio(const int * arreglo, int tam){
    int suma = sumaTotal(arreglo,tam);
    float media = suma/tam;
    return media;}

int Moda(const int * arreglo, int tam){
    int i;
    int Record = 0;
    int valor = arreglo[0];
    int poseedor_DelRecord;
    int Marca = 0;
    for(i = 0; i < tam; ++i){
        if(valor == arreglo[i]){
            ++Marca;
            if(Record < Marca){
                Record = Marca;
                poseedor_DelRecord = valor;}}
        else{
            valor = arreglo[i];
            Marca = 1;}}
    return poseedor_DelRecord;}

int Apariciones(int numero, const int * arreglo,int tam){
    int i;
    int aparece = 0;
    for(i = 0; i < tam; ++i){
        if(numero == arreglo[i])
            ++aparece;  }
    return aparece;}

void muestraArreglo(const int * arreglo, int tam){
    int i;
    int separacion = 4;
    for (i = 0; i < tam; ++i){
        printf(" %d ",arreglo[i]);
        if(i+1 == separacion){
            separacion += 4;
            printf("\n");}}}

int main(void)
{
    srand(time(NULL));
    int numeros[DIMENCION];
    int menor;
    int mayor;
    int primero;
    int ultimo;
    float media;
    int moda;
    int sumaDe_todosLos_Elementos;
    int numeroConcreto = 3;
    int ocurrencias;
    llenaNumeros(numeros);
    ordena(numeros,DIMENCION);
    menor = obtener_MAXoMIN(numeros,DIMENCION,MIN);
    mayor = obtener_MAXoMIN(numeros,DIMENCION,MAX);
    primero = numeros[0];
    ultimo = numeros[DIMENCION-1];
    media = promedio(numeros, DIMENCION);
    moda = Moda(numeros,DIMENCION);
    sumaDe_todosLos_Elementos = sumaTotal(numeros,DIMENCION);
    ocurrencias = Apariciones(numeroConcreto,numeros,DIMENCION);

    printf("menor %d\n",menor);
    printf("mayor %d\n",mayor);
    printf("primero %d\n",primero);
    printf("ultimo %d\n",ultimo);
    printf("media %f\n",media);
    printf("moda %d\n",moda);
    printf("sumaDe_todosLos_Elementos %d\n",sumaDe_todosLos_Elementos);
    printf("numeroConcreto %d\n",numeroConcreto);
    printf("ocurrencias %d\n",ocurrencias);
    muestraArreglo(numeros,DIMENCION);
    return 0;
}
