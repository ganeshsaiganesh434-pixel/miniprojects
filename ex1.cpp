#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    return arr[k - 1];
}

int main() {
    vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k = 4;

    cout << "Kth Smallest Element: " << kthSmallest(arr, k);

    return 0;
}