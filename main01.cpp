#include <iostream>
using namespace std;

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
}

string add(string a, string b) {
    string c;
    c = a + b;
    return c;
}

int main() {
    cout << "\n\n" << add(7, 8);
    cout << "\n\n" << add("mama", "papa") << "\n\n";
    return 0;
}


