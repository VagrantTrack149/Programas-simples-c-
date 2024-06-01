#include <iostream>
#include <conio.h>
#include <string.h>
#define MAX 50;
using namespace std;
struct ordenamiento{
    int elemento;
};
void Leerarray(int, struct ordenamiento[]);
void burbuja(int,struct ordenamiento[]);
void muestra(int,struct ordenamiento[]);
int binaria(int,int,struct ordenamiento[]);

main(){
    int n,pos,z;
    struct ordenamiento orden[50];
    cout<<"Ingrese un limite del arreglo :";
    cin>>n;
    Leerarray(n,orden);
    burbuja(n,orden);
    muestra(n,orden);
    cout<<"\nIngrese el elemento a buscar: ";
    cin>>z;
    pos=binaria(n,z,orden);
    if (pos==-1)
    {
        cout<<"\nElemento no encontrado"<<endl;
    }else cout<<"Elemento encontrado en la posición :"<<pos;
    getch();
    system("PAUSE");
    return 0;
}
void Leerarray(int n,struct ordenamiento a[]){
    for (int i = 0; i < n; i++){
        cout<<"Ingrese un elemento "<<i<<": ";
        cin>>a[i].elemento;
    }
}
void burbuja(int n,struct ordenamiento a[]){
    int i,j;
    struct ordenamiento temporal;
    for (i = 0; i< n ; i++){
        for (j= n-1;j>i;j--){
            if (a[j].elemento>a[j-1].elemento){
                temporal=a[j];
                a[j]=a[j-1];
                a[j-1]=temporal;
            }
        }   
    }
}
void muestra(int n,struct ordenamiento a[]){
    for (int i = 0; i < n; i++){
        cout<<"\n "<<a[i].elemento;
    }
}
int binaria(int n,int z,struct ordenamiento a[]){
    int mid,izq=0,der=n-1;
    while(izq<=der){
        mid=(izq+der)/2;
        if(z>a[mid].elemento){
            izq=mid+1;
        }else if(z<a[mid].elemento){
            der=mid-1;
        }else return mid;
    }
    return -1;
}