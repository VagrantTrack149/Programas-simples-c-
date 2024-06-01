#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>
using namespace std;
vector<vector<int>> V;//Arreglo dinamico, vector de vectores tipo entero
void radix(int [],int);//Radixsort
void print(int [],int);//Imprimir arreglo ordenado
void printbe(int [],int);//Imprimir arreglo antes de ordenar
main(){
    int n;
    do{
    cout<<"Digite la cantidad de números a ordenar"<<endl;
    cout<<"Digite 0, si desea salir del programa"<<endl;    
    cin>>n;
    int num[n];
    if(n>0){
          for (int i = 0; i < n; i++){
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
    V.resize(10); //Dimensionamos el vector en 10, creando una matriz 10x10
    int tempo,m=0,c;
   for (int i = 0; i < 15; i++){ //Recorremos los digitos de los numeros dados, i representa el digito maximo que va a revisar.
    for (int j = 0; j < n; j++){ //Recorremos el arreglo según los numeros dados
        tempo=(int)(a[j]/pow(10,i))%10;
        V[tempo].push_back(a[j]); //Push_back, permite añadir al final de la colección un nuevo dato.
    }
    for (int k = 0; k < 10; k++){
        for (int l = 0; l < V[k].size(); l++){
            a[m]=V[k][l]; //Volvemos a introducir los valores, ahora ordenados al arreglo
            m++; 
        }
        V[k].clear();
    }
        m=0;
   }
   cout<<endl;
}
void print(int a[],int tam){ //Imprimirmos el arreglo ordenado
    cout<<"\n Arreglo ordenado"<<endl;
    for (int i = 0; i < tam; i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}
void printbe(int a[],int tam){ //Imprimimos el arreglo No ordenado
    cout<<"\n Arreglo No ordenado"<<endl;
    for (int i = 0; i < tam; i++){
        cout<<"\t"<<a[i];
    }
}