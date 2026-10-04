#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,20,-30,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,[](int a,int b){
        return abs(a)<abs(b);
    });
    for(auto x:arr)
    cout<<x<<" ";
    return 0;

}