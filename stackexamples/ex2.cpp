#include<iostream>
#include<stack>
using namespace std;
void nextGreater(int arr[],int n){
    stack<int>s;
    int nge[n];
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&& s.top()<=arr[i]){
            s.pop();
        }
        nge[i]=s.empty()?-1:s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}




int main() {
    int arr[] = {5, 15, 10, 6, 12, 9, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreater(arr, n);
    return 0;
}