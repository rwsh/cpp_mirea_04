#include <iostream>
#include <string>
using namespace std;

template<typename T>
class TItem {
    T name;
public:
    TItem(T name) {
        this->name = name;
    }
    T get_name() {
        return name;
    }
};

template<>
class TItem<int> {
    int name;
public:
    TItem(int name) {
        this->name = name;
    }
    string get_name() {
        return "number: " + to_string(name);
    }
};

int main() {
    TItem<int> item1(23);
    TItem<string> item2(string("Box"));
    cout << "\n\n" << item1.get_name();
    cout << "\n\n" << item2.get_name() << "\n\n";
    return 0;
}




