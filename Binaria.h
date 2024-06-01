#include <iostream>
#include <conio.h>
using namespace std;
void burbuja(int n,int a[]){    /*struct ordenamiento para a[]*/
    int i,j;
    /*struct ordenamiento*/int temporal;
    for (i = 0; i< n ; i++){
        for (j= n-1;j>i;j--){
            if (a[j]>a[j-1]){   /*a[].elemento*/
                temporal=a[j];  /*a[].elemento*/
                a[j]=a[j-1];
                a[j-1]=temporal;
            }
        }   
    }
}
int binaria(int n,int z,int a[]){   /*struct ordenamiento para a[]*/
    int mid,izq=0,der=n-1;
    while(izq<=der){
        mid=(izq+der)/2;
        if(z>a[mid]){   /*a[].elemento*/
            izq=mid+1;
        }else if(z<a[mid]){/*a[].elemento*/
            der=mid-1;
        }else return mid;
    }
    return -1;
}