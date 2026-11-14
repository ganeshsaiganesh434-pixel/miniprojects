#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int purchaseMax(int arr[], int n, int sum) {
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n); // Min Heap

    int ru = 0;
    while (sum > 0 && !pq.empty() && pq.top() <= sum) {
        sum -= pq.top();
        pq.pop();
        ru++;
    }
    return ru;
}

int main() {
    int arr[] = {1, 12, 5, 111, 200};
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum items that can be purchased: " << purchaseMax(arr, n, sum) << endl;
    return 0;
}