#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   
    int arr[] = {20, 10, -30, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    auto myCmp = [](int a, int b) {
        return abs(a) < abs(b);
    };
    sort(arr, arr + n, myCmp);
    for(auto x: arr)
        cout << x << ' ';
    return 0 ;
}