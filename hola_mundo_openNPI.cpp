#include <stdio.h>
#include <iostream>
#include <omp.h>
/*Open MP hello world xdxd */

using namespace std;

int main() {
    #pragma omp parallel{cout << "Hola mundo xdxd \n" ;}
    cout << omp_get_num_threads(); <<endl; 
    cout << omp_get_thread_num();  <<endl;
}
