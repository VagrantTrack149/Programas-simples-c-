// 16_oct.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mpi.h>
#include <chrono>
#include <fstream>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;
const int H = 700000;
int sis, intervalo;
int ran;
int i;
int frec[27], frec2[27];
char libro[H],libro2[H];
int main()
{
    auto started = high_resolution_clock::now();
    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &sis);
    MPI_Comm_rank(MPI_COMM_WORLD, &ran);
    if(ran==0)
        auto started = high_resolution_clock::now();
    fstream Odisea("Odisea.txt");
    for (int i = 0; i < 26; i++)
        frec[i] = 0;
    char letra;
    while (Odisea >> letra) {
        libro[i++] = letra;
    }
    MPI_Scatter(&libro, H / sis,MPI_CHAR,&libro2, H / sis,MPI_CHAR,0,MPI_COMM_WORLD);
    int intervalo = H / sis;
    {
        for (int i = ran * intervalo; i < (ran + 1) * intervalo; i++) {
            frec[libro2[i] - 'a']++;
        }
    }
    MPI_Reduce(&frec, &frec2,27, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    if (ran==0)
    {
        auto done = high_resolution_clock::now();
        cout << "F2: " << endl;
        for (int i = 0; i < 26; i++)
            cout << char(i + 'a') << ": " << frec2[i] << endl;
        cout << "Milliseconds: ";
        cout << duration_cast<milliseconds>(done - started).count() << endl;

    }
    MPI_Finalize();
    
    //cout << "Milliseconds: ";
    //cout << duration_cast<milliseconds>(done - started).count() << endl;
}
