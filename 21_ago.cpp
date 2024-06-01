#include <stdio.h>
#include <omp.h>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
const int N = 100000000;
int ar[N];
int nt;
long re[20], sum;
int main() {
	for (int i = 0; i < N; i++) {
		ar[i] = rand();
	}
	//omp_set_num_threads(4);	
	auto started = high_resolution_clock::now();
#pragma omp parallel
	nt = omp_get_num_threads();
	cout << nt << endl;
	int n = N / nt;
	//N=40; nt=4; n=N/nt; i=0... n-1, i=n.... 2*n-1 
#pragma omp parallel 
	{
		long temp = 0;
		int ct = omp_get_thread_num();
		re[ct] = 0;
		for (int i = ct * n; i < (ct + 1) * n; i++) {
			temp += ar[i];
		}
		re[ct] = temp;
	}
	sum = 0;
	for (int i = 0; i <= nt; i++) {
		sum += re[i];
	}
	cout << "LA SUMA ES: " << sum << endl;
	auto done = high_resolution_clock::now();
	cout << "Milliseconds: ";
	cout << duration_cast<milliseconds>(done - started).count() << endl;
}
