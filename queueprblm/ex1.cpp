#include <iostream>
#include <queue>
using namespace std;

void printFirstN(int n) {
    queue<string> q;
    
    // Step 1: Start with base numbers
    q.push("5");
    q.push("6");

    // Step 2: Generate and print N numbers
    for (int count = 0; count < n; count++) {
        string curr = q.front();
        q.pop();

        cout << curr << " ";

        // Generate next numbers by appending '5' and '6'
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main() {
    int n = 10;
    cout << "First " << n << " numbers: ";
    printFirstN(n);
    return 0;
}