#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    void solve(stack<int>& s, int k) {
        // Middle element reached
        if (k == 1) {
            s.pop();
            return;
        }

        int x = s.top();
        s.pop();

        solve(s, k - 1);

        s.push(x);
    }

    void deleteMid(stack<int>& s) {
        int k = s.size() / 2 + 1; // middle from top
        solve(s, k);
    }
};

int main() {
    stack<int> s;

    // Bottom -> Top : 10 20 30 40 50
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    Solution obj;
    obj.deleteMid(s);

    cout << "Stack after deleting middle element (Top -> Bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}