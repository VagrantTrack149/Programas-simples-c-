#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int a[5][10],num;
	srand (time(NULL));
	for(int i=0;i<5;i++){
        for (int j = 0;j < 10; j++)
        {
        	a[i][j] = rand() % 100;
        }	
	}
	for(int i=0;i<5;i++){
        for (int j = 0;j < 10; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
        }	
    for(int i=0;i<5;i++){
        for (int j = 0;j < 10; j++)
        {
        	if(i==j){
            switch(i){
            	case 0:cout<<a[i][j];break;
            	case 1: cout<<"\t"<<a[i][j]; break;
            	case 2: cout<<"\t\t"<<a[i][j]; break;
            	case 3: cout<<"\t \t\t"<<a[i][j]; break;
            	case 4: cout<<"\t \t \t\t"<<a[i][j]; break;
			}
            num+=a[i][j];
        	}
        }
        cout<<"\n";
        }	
        cout<<"La suma de la diagonal es: "<<num<<endl;
	getch();
	return 0;
}
