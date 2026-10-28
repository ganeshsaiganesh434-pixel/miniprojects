#include <iostream>
#include <stack>
#include <climits>
using namespace std;

stack<int> _push(int arr[], int n) {
    stack<int> s;

    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }

    return s;
}

void _getMinAtPop(stack<int> s) {
    while (!s.empty()) {
        stack<int> temp = s;
        int mn = INT_MAX;
        while (!temp.empty()) {
            mn = min(mn, temp.top());
            temp.pop();
        }
        cout << mn << " ";
        s.pop();
    }
}
int main() {

    int arr[] = {1, 6, 43, 1, 2, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> s = _push(arr, n);

    _getMinAtPop(s);

    return 0;
}