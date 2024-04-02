#include <iostream>
using namespace std;

template<typename T> void calc(T *a, int N) {
    *a = 0;
    for (int n = 0; n < N; n++) {
        *a += (n + 1);
    }
}

int main() {
    int a;
    double x;
    calc(&a, 10);
    calc(&x, 100);

    cout << "\n\n" << a << "\t" << x << "\n\n";
    
    return 0;
}


