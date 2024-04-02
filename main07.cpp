#include <iostream>
using namespace std;

template<typename T, typename S> decltype(auto) div(T a, S b) {
    return a / b;
}

int main() {

    auto c = div(1024, 3.0);

    cout << "\n\n c = " << c << "\n\n";
    
    return 0;
}




