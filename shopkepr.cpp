#include <iostream>
#include <vector>
#include <stack>
using namespace std;

long long totalProfit(vector<int>& arr) {
    int n = arr.size();

    vector<int> nge(n, -1);
    stack<int> st;

    // Find first greater or equal element on right
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] >= arr[st.top()]) {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    long long profit = 0;

    for (int i = 0; i < n; i++) {
        if (nge[i] != -1)
            profit += (nge[i] - arr[i]);
        else
            profit += arr[i];
    }

    return profit;
}

int main() {
    vector<int> arr = {5, 4, 6, 2, 1};

    cout << "Total Profit = " << totalProfit(arr);

    return 0;
}
