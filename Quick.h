#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int n;
void quicksort(double A[100],int primero, int ultimo){
    int central,i,j;
    double pivote;
    central=(primero+ultimo)/2;
    pivote=A[central];
    i=primero;
    j=ultimo;
    do{
            while(A[i]<pivote) i++;
            while(A[j]>pivote) j--;
            if(i<=j){
                double temp;
                temp=A[i];
                A[i]=A[j]; /*intercambia A[i] con A[j] */
                A[j]=temp;
                i++;
                j--;
            }
        }
    while(i<=j);
    if(primero<j)
        quicksort(A,primero,j); /*mismo proceso con sublista izquierda*/
    if(i<ultimo)
        quicksort(A,i,ultimo); /*mismo proceso con sublista derecha*/
}
