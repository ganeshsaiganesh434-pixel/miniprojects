#include <iostream>
class A {
public:
    A() { std::cout << "A's Constructor called\n"; }
};

class B {
public:
    B() { std::cout << "B's Constructor called\n"; }
};

class C : public A, public B {
public:
    C() { std::cout << "C's Constructor called\n"; }
};

int main() {
    C obj;
    return 0;
}