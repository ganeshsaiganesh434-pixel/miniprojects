#include<iostream>
#include<vector>
using namespace std;
vector<int>getsmaller(int arr[],int n,int k){
    vector<int>res;
    for(int i=0;i<n;i++){
        if(arr[i]<k){
            res.push_back(arr[i]);
        }
    }
    return res;
}
int main(){
    int arr[]={1,2,3,4,5};
    vector<int>res=getsmaller(arr,5,6);
    for(int x:res){
        cout<<x<<" ";

    }
    return 0;

}