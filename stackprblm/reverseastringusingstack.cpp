#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseString(string &str) {
    stack<char> s;

    // Push all characters into stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // Pop and put back into string
    for (int i = 0; i < str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
}

int main() {
    string str = "GeeksQuiz";

    reverseString(str);

    cout << str;

    return 0;
}