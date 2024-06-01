#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>
using namespace std;
int V[99];
void radix(int [],int);
void print(int [],int);
void printbe(int [],int);
main(){
    int n;
    do{
    cout<<"Digite la cantidad de números a ordenar"<<endl;
    cout<<"Digite 0, si desea salir del programa"<<endl;    
    cin>>n;
    int num[n];
    if(n>0){
          for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    printbe(num,n);
    radix(num,n);
    print(num,n);
    }
    system("Pause");
    }while(n!=0);
    return 0;
}
void radix(int a[],int n){
    int tempo,m=0;
   for (int i = 0; i < 15; i++)
   {
    for (int j = 0; j < n; j++)
    {
        tempo=(int)(a[j]/pow(10,i))%10;
        V[tempo]=(a[j]);
    }
    for (int k = 0; k < 10; k++)
    {
        for (int l = 0; l < sizeof(V); l++)
        {
            a[m]=V[l];
            m++;
        }
        V[k]=0;
    }
        m=0;
   }
 
}
void print(int a[],int tam){
    cout<<"\n Arreglo ordenado"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<"\t"<<a[i];
    }
    
}
void printbe(int a[],int tam){
    cout<<"\n Arreglo No ordenado"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}