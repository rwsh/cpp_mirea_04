#include <iostream>
using namespace std;

template<typename T, typename S> void print(T a, S b) {
    cout << "\n\n" << a << "\n\n";
    cout << b << "\n\n";
}

int main() {

    print(1024, string("Mama"));
    
    return 0;
}




