#include <iostream>
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

int main() {
    TItem<int>* item1 = new TItem<int>(23);
    TItem<string> item2(string("Box"));

    cout << "\n\n" << item1->get_name();
    cout << "\n\n" << item2.get_name() << "\n\n";

    delete item1;
    
    return 0;
}




