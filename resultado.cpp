#include <stdio.h>
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;
const float n = 100000000000;
float f=100;
float resul = 0;

int main() {
    
    auto start = high_resolution_clock::now();
    resul = f / n * n;
    printf("%.15f\n",resul);
    auto end = high_resolution_clock::now();
    cout << duration_cast<microseconds>(end - start).count();
}
