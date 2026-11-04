#include <bits/stdc++.h>
using namespace std;

stack<int> ms; // main stack
stack<int> as; // auxiliary stack to store minimums

void push(int x) {
    ms.push(x);
    if (as.empty() || x <= as.top())
        as.push(x);
}

void pop() {
    if (!ms.empty()) {
        if (ms.top() == as.top())
            as.pop();
        ms.pop();
    }
}

int getMin() {
    if (!as.empty())
        return as.top();
    return -1; 
}

int main() {
    push(5);
    push(4);
    push(3);
    cout << getMin() << endl; 
    pop();
    cout << getMin() << endl; 
    push(2);
    cout << getMin() << endl;

    return 0;
}