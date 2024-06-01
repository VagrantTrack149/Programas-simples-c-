#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	int f,c;
	setlocale(LC_ALL, "spanish");
	cout<<"Introduce el número de filas de la matriz \n";
	cin>>f;
	cout<<"Introduce el numero de columnas de la matriz\n";
	cin>>c;
	int a[f][c];
	for(int i=0;i<f;i++){
        for (int j = 0;j < c; j++)
        {
        	cout<<"Introduzca valores enteros"<<endl;
        	cin>>a[i][j];
        }	
	}
	cout<<"Imprimir matriz en orden normal"<<endl;
	for(int i=0;i<f;i++){
        for (int j = 0;j < c; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nImprimir matriz en orden inverso"<<endl;
	for(int i=f-1;i>=0;i--){
        for (int j = c-1;j >= 0; j--)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }	
	
	getch();
	return 0;
}
