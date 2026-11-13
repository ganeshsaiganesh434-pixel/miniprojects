#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthLargest(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());

    int n = arr.size();
    return arr[n - k];
}

int main() {
    vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k = 4;

    cout << "Kth Largest Element: " << kthLargest(arr, k);

    return 0;
}