//Neil Otniel Moreno Rivera
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
using namespace std;
int Q[100],V[100];
int n,i,j,aux;

rellenar(){
	int lo;
	cout<<"¿Cuantos elementos se van a agregar?"<<endl;
	cin>>n;
	aux=n;
	for(i=0;i<n;i++){
		cout<<"Q["<<i<<"] = ";
		cin>>Q[i];
	}
	cout<<"\nElementos ingresados"<<endl;
	for(i=0;i<n;i++){
		cout<<Q[i]<<" ";
	}
	for(i=0;i<n;i++){
		V[i]=Q[i];
	}
}
QuickSort(int Q[100], int primero, int ultimo){
	fflush(stdin);
	int central, pivote, temporal;
	central = (primero +ultimo)/2; 
	pivote = Q[central];
	i= primero;
	j= ultimo;
	do{	
		while(Q[i]<pivote) i++; 
		while(Q[j]>pivote) j--; 
		if(i<=j){
			temporal=Q[i];
			Q[i]=Q[j];
			Q[j]=temporal;
			i++;
			j--;
		}
	}while(i<=j);
	if(primero<j){
		QuickSort(Q, primero,j);
	}
	if(i<ultimo){
		QuickSort(Q,i,ultimo);
	}
}
mostrarOrden(int Q[100], int numero){
	cout<<endl;
	cout<<"\nQuicksort"<<endl;
	cout<<"\nOrden Ascendente"<<endl;
	for(i=0;i<=n;i++){
		cout<<Q[i]<<" ";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=n;i>=0;i--){
		cout<<Q[i]<<" ";
	}
}
Burbuja(){
	aux=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(Q[j]>Q[j+1]){
				aux=Q[j];
				Q[j]=Q[j+1];
				Q[j+1]=aux;
			}
		}
	}
	cout<<"Burbuja"<<endl;
	cout<<"Orden Ascendente"<<endl;
	for(i=0;i<=n;i++){
		cout<<Q[i]<<"\t";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=n;i>=0;i--){
		cout<<Q[i]<<" ";
	}
}
Insercion(){
	aux=0;
	int pos;
	for(i=0;i<=n;i++){
		pos=i;
		aux=Q[i];
		while((pos>0)&&(Q[pos-1]>aux)){
			Q[pos]=Q[pos-1];
			pos--;
		}
		Q[pos]=aux;
	}
	cout<<"Inserción"<<endl;
	cout<<"Orden Ascendente"<<endl;
	for(i=0;i<=n;i++){
		cout<<Q[i]<<" ";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=n;i>=0;i--){
		cout<<Q[i]<<" ";
	}
}
Seleccion(){
	aux=0;
	int min=0;
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(Q[j]<Q[min]){
				min=j;
			}
		}
		aux=Q[i];
		Q[i]=Q[min];
		Q[min]=aux;
	}	
	cout<<"Selección"<<endl;
	cout<<"Orden Ascendente"<<endl;
	for(i=0;i<=n;i++){
		cout<<Q[i]<<" ";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=n;i>=0;i--){
		cout<<Q[i]<<" ";
	}	
}
menu(){
	cout<<"Menú de algoritmos de ordenamiento"<<endl;
	cout<<"Primero, debe llenar el arreglo antes de ordenar:"<<endl;
    cout<<"1. Rellenar arreglo"<<endl;
    cout<<"2. Ver arreglo"<<endl;
    cout<<"3. Burbuja"<<endl;
    cout<<"4. Inserción"<<endl;
    cout<<"5. Selección"<<endl;
    cout<<"6. Quicksort"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"Ingrese opcion: ";
	}
main(){
	setlocale(LC_ALL, "spanish");
	int p;
	do{
	menu();
	 cin>>p;
    switch(p){
    	case 1: system("cls");
    			rellenar();
    	break;
    	case 2:
    		cout<<"\nArreglo"<<endl;
			for(i=0;i<n;i++){
				cout<<V[i]<<" ";
			}
    	break;
    	case 3: system("cls");
    			Burbuja();
    	break;
    	case 4:
    			system("CLS");
    			Insercion();
    	break;
    	case 5:
    			system("CLS");
    			Seleccion();
    	break;
    	case 6:	system("CLS");
    			QuickSort(Q,0, n-1);
				mostrarOrden(Q, n);
    	break;
		case 0:
				cout<<"Saliendo..."<<endl;
		break;
		}
	cout<<endl;
	system("Pause");
	}while(p!=0);
	return 0;
}

