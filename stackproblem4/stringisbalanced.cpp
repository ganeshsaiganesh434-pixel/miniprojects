#include<bits/stdc++.h>
using namespace std;

// Function to check if two brackets match
bool matching(char a, char b) {
    return ((a == '(' && b == ')') || 
            (a == '{' && b == '}') || 
            (a == '[' && b == ']'));
}


bool isBalanced(string str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
       
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            st.push(str[i]);
        }
       
        else {
            if (st.empty()) {
                return false;
            }
         
            else if (!matching(st.top(), str[i])) {
                return false;
            }
            // If the brackets match, pop the top element from the stack
            else {
                st.pop();
            }
        }
    }

    // If the stack is empty, the string is balanced
    return st.empty();
}

int main() {
    string bracSeq = "(())(())";
    cout << isBalanced(bracSeq); 
    return 0;
}