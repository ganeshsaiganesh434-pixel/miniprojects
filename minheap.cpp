#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void printKLargest(int arr[], int n, int K) {
    priority_queue<int, vector<int>, greater<int>> minHeap(arr, arr + K);
    
    for (int i = K; i < n; i++) {
        if (arr[i] > minHeap.top()) {
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }

    
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 23, 12, 9, 30, 2, 50};
    int K = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printKLargest(arr, n, K);
    return 0;
}