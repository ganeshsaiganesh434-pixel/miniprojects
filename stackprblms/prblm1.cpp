#include<iostream>
using namespace std;
void  previousGreaterNaive(int arr[],int n){
    for(int i=0;i<n;i++){
        int pg=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                pg=arr[j];
                break;
            }

        }
        cout<<pg<<" ";
       
    }
}




int main() {
    int arr[] = {15, 10, 18, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    previousGreaterNaive(arr, n); 
    return 0;
}