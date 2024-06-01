#include <stdio.h>
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;
const int n = 100;
int ar[n];
long resul = 0;

int main() {
    for (int a = 0; a < n; a++){
        ar[a]=rand();
    }
    auto start = high_resolution_clock::now();

    for (int i = 0; i < n; i++) { 
        resul += ar[i];
    }

    auto end = high_resolution_clock::now();
    cout << duration_cast<microseconds>(end - start).count();
}

