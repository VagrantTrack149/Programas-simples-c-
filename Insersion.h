#include<iostream>
using namespace std;
#define largo 50
void insercionDirecta(int A[],int n)
{
      int i,j,v;
      for (i = 1; i < n; i++){
             v = A[i];
             j = i - 1;
             while (j >= 0 && A[j] > v){
                  A[j + 1] = A[j];
                  j--;
             }
             A[j + 1] = v;
      }   
}