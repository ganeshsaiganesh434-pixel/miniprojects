#include<iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int i) : x(i) {
        cout << "Cons " << x << endl;
    }
    ~Test() {
        cout << "Dest " << x << endl;
    }
};

int main() {
    Test t1(10);
    Test t2(20);
    return 0;
}