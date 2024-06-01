//CADENA contar letras
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char frase1[100];
	int i,a=0,b=0,l=0;
	
	cout<<"Inserte una frase: ";
	cin.getline(frase1,100,'\n');
	
	for(i=0;i<100;i++){
		switch(frase1[i]){
			case 'a': a++; break;
			case 'b': b++; break;
			case 'l': l++; break;
		}		
	}
	
	cout<<"La letra a: "<<a<<endl;
	cout<<"La letra b: "<<b<<endl;
	cout<<"La letra l: "<<l<<endl;
	
	getch();
	return 0;
}
