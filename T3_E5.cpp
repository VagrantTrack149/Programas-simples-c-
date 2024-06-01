#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
int main(){
	 setlocale(LC_ALL, "spanish");
	int a[25],aux;
	srand (time(NULL));
	for(int i=0;i<25;i++){
        	a[i] = rand() % 100;
	}
	cout<<"Arreglo Inicial"<<endl;
	for(int i=0;i<25;i++){
        	cout<<a[i]<<"\t";	
	}
	cout<<"\n";
	cout<<"Arreglo menor a mayor"<<endl;
	for(int i=0;i<25;i++){
		for(int j=i+1;j<25;j++){
		if(a[i]>a[j]){
			aux=a[i];
			a[i]=a[j];
			a[j]=aux;	
			}
		}
	}	
	for(int i=0;i<25;i++){
        	cout<<a[i]<<"\t";	
	}
	cout<<"\n";
	cout<<"Arreglo mayor a menor"<<endl;
	for(int i=0;i<25;i++){
		for(int j=i+1;j<25;j++){
		if(a[i]<a[j]){
			aux=a[i];
			a[i]=a[j];
			a[j]=aux;	
			}
		}
	}	
	for(int i=0;i<25;i++){
        	cout<<a[i]<<"\t";	
	}
	cout<<"\n";
	cout<<"Arreglo de pares"<<endl;
	for(int i=0;i<25;i++){
			if(a[i]%2==0){
        	cout<<a[i]<<"\t";}	
	}
	cout<<"\n";
	cout<<"Arreglo de impares"<<endl;
	for(int i=0;i<25;i++){
			if(a[i]%2==1){
        	cout<<a[i]<<"\t";}	
	}
	
	getch();
	return 0;
}
