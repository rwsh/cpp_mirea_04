#include <iostream>
using namespace std;

template<typename T> T calc(T a, T b) {
    return a / b;
}

int main() {

    int c = calc<int>(10, 3);

    cout << "\n\n c = " << c << "\n\n";
    
    return 0;
}




