#include<iostream>
#include<algorithm>
using namespace std ;
bool compare(int x, int y) { return abs(x) < abs(y); }
int main()
{   
    int arr[] = {2, 4, -1, 8, -9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr, arr + n, compare);
    for(int i =0; i < n; i ++)
        cout << arr[i] << ' ';
    return 0 ;
}