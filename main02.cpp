#include <iostream>
using namespace std;

template<typename T> T add(T a, T b) {
    T c;
    c = a + b;
    return c;
}

int main() {
    cout << "\n\n" << add(7, 8);
    cout << "\n\n" << add(string("mama"), string("papa")) << "\n\n";
    return 0;
}


