#include<iostream>
using namespace std;
void nextGreater(int arr[],int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n){
            cout<<-1<<" ";
        }
    }

}

int main() {
    int arr[] = {5, 15, 10, 6, 12, 9, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreater(arr, n);
    return 0;
}