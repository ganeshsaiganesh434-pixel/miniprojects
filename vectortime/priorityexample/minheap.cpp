#include<iostream>
#include<queue>
using namespace std;
void mysort(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+3);
    for(int i=0;i<n;i++){
        arr[i]=pq.top();
        pq.pop();
    }

}
int main(){
      int arr[]={12,5,8};
    mysort(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<"\n";
    return 0;
    
}