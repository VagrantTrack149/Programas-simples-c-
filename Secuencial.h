#include <iostream>
#include <conio.h>
using namespace std;
int buscasecuencial(int n,int a[],int ele){
    for(int i=0;i<n;i++)
        if(ele==a[i])   return 1;
    return 0;
}