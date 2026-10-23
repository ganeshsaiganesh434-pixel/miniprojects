#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};

    auto it = dq.begin();   
    cout << "First element: " << *it;

    return 0;
}