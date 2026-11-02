#include<iostream>
#include<stack>
using namespace std;
void previousGreater(int arr[],int n){
    stack<int>s;
   for(int i=0;i<n;i++){
    while(s.empty()==false&&s.top()<arr[i]){
        s.pop();
    }
    int pg=s.empty()?-1:s.top();
    cout<<pg<<" ";
    s.push(arr[i]);
   }
}

int main() {
    int arr[] = {15, 10, 18, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    previousGreater(arr, n);
    return 0;
}