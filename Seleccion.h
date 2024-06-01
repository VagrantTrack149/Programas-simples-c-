#include<iostream>
using namespace std;
#define largo 50
void seleccionsort (int  A[], int n){
        int min,i,j,aux;
        for (i=0; i<n-1; i++){
              min=i;
              for(j=i+1; j<n; j++)
                    if(A[min] > A[j])
                       min=j;
              aux=A[min];
              A[min]=A[i];
              A[i]=aux ;
        }
} 