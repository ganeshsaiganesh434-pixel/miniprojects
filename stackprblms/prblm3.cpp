
#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class SpecialStack {
    stack<int> s;

public:
    SpecialStack() {}

    void push(int x) {
        s.push(x);
    }

    void pop() {
        if (!s.empty())
            s.pop();
    }

    int peek() {
        if (s.empty())
            return -1;
        return s.top();
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if (s.empty())
            return -1;

        stack<int> temp = s; // copy stack
        int mn = INT_MAX;

        while (!temp.empty()) {
            mn = min(mn, temp.top());
            temp.pop();
        }

        return mn;
    }
};
int main() {
    SpecialStack st;

    st.push(10);
    st.push(5);
    st.push(20);
    st.push(2);

    cout << "Top Element: " << st.peek() << endl;
    cout << "Minimum Element: " << st.getMin() << endl;

    st.pop();

    cout << "After Pop:" << endl;
    cout << "Top Element: " << st.peek() << endl;
    cout << "Minimum Element: " << st.getMin() << endl;

    if (st.isEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is Not Empty" << endl;

    return 0;
}