#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    Test(int v) {
        value = v;
    }

    inline int getValue() {
        return value;
    }

    friend void show(const Test& t);
};

void show(const Test& t) {
    cout << t.value << endl;
}

int main() {
    Test obj(50);

    cout << obj.getValue() << endl;
    show(obj);

    return 0;
}
