#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int multiplyUsingfunPointer(int a, int b) {
    // declare and assign function pointer
    int (*fun_ptr)(int, int) = multiply;

    // call the function using the pointer
    return (*fun_ptr)(a, b);
}

int main() {
    cout << multiplyUsingfunPointer(5, 6) << endl; // Output: 30
    return 0;
}
