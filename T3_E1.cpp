#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int a[5][5];
	srand (time(NULL));
	for(int i=0;i<5;i++){
        for (int j = 0;j < 5; j++)
        {
        	a[i][j]=2 * ((rand() % 50) + 1);
        }	
	}
	for(int i=0;i<5;i++){
        for (int j = 0;j < 5; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
        }	
	getch();
	return 0;
}
