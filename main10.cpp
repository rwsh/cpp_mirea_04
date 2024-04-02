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

template<typename T>
class TBox: public TItem<T> {
public:
    TBox(T name): TItem<T>(name) { }
    T get_name_box() {
        cout << "\n\nI am Box!\n\n";
        return TItem<T>::get_name();
    }
};

int main() {
    TBox<int> Box(123);
    cout << "\n\n" << Box.get_name_box() << "\n\n";

    return 0;
}



