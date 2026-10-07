#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,15,8,20};
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    if(binary_search(arr,arr+4,8))
    cout<<"present";
    else
    cout<<"not present";
    return 0;
}