#include<iostream>
 #include<conio.h>
 #include<stdlib.h>
 #include <time.h>
 using namespace std;
 int main()
 {
	int M[5][5], num = 0, i, j; 	
	srand (time(NULL));
	for(i=0; i<5;i++)
	{	
	  for(j=0; j<5; j++)
	  {
	  	num = 2*rand()%50;
	 		if (num % 2 == 0)
				{
		 	 	M[i][j] = num;
				}
				num=0;
	  }
	}
	for(i=0; i<5;i++)
	{
	  for(j=0; j<5; j++)
	  {
	  	cout<<M[i][j]<<"\t";
	  }
	  cout << endl;
	}
    getch(); 
	return 0;
 }
