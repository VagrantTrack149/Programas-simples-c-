#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
int main(){
	 setlocale(LC_ALL, "spanish");
	int a[3][4],n[3][4],m[3][4],s[3][4],t[3][4];
	srand (time(NULL));
	for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
        	a[i][j] = rand() % 100;
        	n[i][j] = rand() % 100;
        }	
	}
	cout<<"Primera Matriz :\n";
	for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Segunda Matriz :\n";
	for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
            cout<<n[i][j]<<"\t";
        }
        cout<<"\n";
    }	
    cout<<"Suma de arreglos, posición por posición\n";
    for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
           m[i][j]=a[i][j]+n[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }	
    cout<<"Resta de arreglos, posición por posición\n";
    for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
           s[i][j]=a[i][j]-n[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
            cout<<s[i][j]<<"\t";
        }
        cout<<"\n";
    }	
    cout<<"Multiplicación de arreglos, posición por posición\n";
    for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
           t[i][j]=a[i][j]*n[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<3;i++){
        for (int j = 0;j < 4; j++)
        {
            cout<<t[i][j]<<"\t";
        }
        cout<<"\n";
    }	
	getch();
	return 0;
}
