#include <iostream>
#include <string>
 
using namespace std;
 
void ordenar( string *s );
void imprimir( string s[] );
 
int main()
{
    string nombre;
    string n[10];
 
    cout << "\nNombres:\n";
    for(int i = 0; i < 10; i++ ){
        cout << "(" << i + 1 << "/10): ";
        getline( cin, nombre );
        n[i] = nombre;
    }
 
    ordenar( n );
    imprimir( n );
 
    return 0;
 
}
 
void ordenar( string *v )
{
    int valor, j;
    string temp;
 
    for( int i = 1; i < 10; i++ ) {
        valor = v[i].length();
        temp = v[i];
        j = i;
        while( j > 0 && valor < v[j-1].length() ) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = temp;
    }
}
 
void imprimir( string s[] )
{
    cout << "\nNombres ordenados:\n";
    for( int i = 0; i < 10; i++ ) {
        cout << s[i] << "\n";
    }
    cout << endl;
}
