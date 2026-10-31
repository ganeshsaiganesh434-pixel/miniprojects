#include <iostream>
#include <stack>
using namespace std;

void calculateSpan(int arr[], int n) {
    stack<int> s;
    s.push(0);

    // Span of the first day is always 1
    cout << "1 ";
    for (int i = 1; i < n; i++) {
        // Pop elements from the stack while the top is less than or equal to the current price
        while (!s.empty() && arr[s.top()] <= arr[i]) {
            s.pop();
        }

        // Calculate the span for the current day
        int span = s.empty() ? (i + 1) : (i - s.top());
        cout << span << " ";

      
        s.push(i);
    }
}

int main() {
    int arr[] = {15, 13, 12, 14, 16, 8, 6, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    calculateSpan(arr, n);
    return 0;
}