#include <iostream>
using namespace std;

template<typename T> T calc(T a, T b) {
    return a * b;
}

template<typename T> T calc(T a) {
    return a * a;
}

int main() {

    cout << "\n\n" << calc(7, 8) << "\t" << calc(6.0) << "\n\n";
    
    return 0;
}




