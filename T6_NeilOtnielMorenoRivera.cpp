//Neil Otniel Moreno Rivera
#include<iostream>
#include <locale.h>
using namespace std;
int A[100],B[100],n,i,j,aux;
rellenar(){
	cout<<"¿Cuantos elementos se van a agregar?"<<endl;
	cin>>n;
	aux=n;
	for(i=0;i<n;i++){
		cout<<"Q["<<i<<"] = ";
		cin>>A[i];
	}
	cout<<"\nElementos ingresados"<<endl;
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	for(i=0;i<n;i++){
		B[i]=A[i];
	}
}
QuickSort(int A[100], int Inicio, int Fin){
	int medio, i, j, AP, aux;
	medio = (Inicio +Fin)/2; 
	AP = A[medio];
	i= Inicio;
	j= Fin;
	do{
		while(A[i]<AP) i++; 
		while(A[j]>AP) j--; 
		if(i<=j){
			aux=A[i];
			A[i]=A[j];
			A[j]=aux;
			i++;
			j--;
		}
	}while(i<=j);
	
	if(Inicio<j){
		QuickSort(A, Inicio,j);
	}
	
	if(i<Fin){
		QuickSort(A,i,Fin);
	}
}
Buscar(int A[100]){
	bool ba=false;
	int a,v=0,indice[n],c=0;
	cout<<"Digite el número a buscar en el arreglo: ";
	cin>>a;
	for(i=0;i<n;i++){
		if(A[i]==a){
			cout<<"El número se encuentra en la posición : "<<i+1<<endl;
			v++; c++;	
		}
	}
	if(v>0){
	cout<<"El número se encontró "<<v<<" veces en el arreglo";
	}else{
		cout<<"No se encontró el número"<<endl;
	}
}
MostrarQS(int A[100], int n){
	int i;
	cout<<"\nArreglo Ordenado de menor a mayor"<<endl;
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<"\nArreglo Ordenado de mayor a menor"<<endl;
	for(i=n-1;i>=0;i--){
		cout<<A[i]<<" ";
	}
	cout<<"\nArreglo original"<<endl;
	for(i=0;i<n;i++){
		cout<<B[i]<<" ";}
}
menu(){
	cout<<"Menú de ordenamiento y busqueda"<<endl;
	cout<<"Primero, debe llenar el arreglo antes de ordenar o buscar:"<<endl;
    cout<<"1. Rellenar arreglo"<<endl;
    cout<<"2. Ver arreglo original y ordenado"<<endl;
    cout<<"3. Buscar"<<endl;
    cout<<"4. Ordenar"<<endl;
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
    		MostrarQS(A,n);
    	break;
    	case 3: system("cls");
    			Buscar(A);
    	break;
    	case 4:
    			system("CLS");
    			QuickSort(A,0,n-1);
    			cout<<"Arreglo ordenado"<<endl;
    	break;
		case 0:
				cout<<"Saliendo..."<<endl;
		break;
		default: cout<<"Digite una opción valida"<<endl; break;
		}
	cout<<endl;
	system("Pause");
	system("cls");
	}while(p!=0);
	return 0;
}
