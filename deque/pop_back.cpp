#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};

    dq.pop_back();         

    for (int x : dq)
        cout << x << " ";
    return 0;
}