#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>
using namespace std;
vector <vector <char> > V;//Arreglo dinamico, vector de vectores tipo entero
char a[100];

main(){
	V.resize(100);
    cin.getline(a);
    V.push_back(a);
    cout<<a<<endl;
    cout<<V;
    system("pause");
}
