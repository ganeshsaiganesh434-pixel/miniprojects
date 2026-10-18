#include<utility>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void  printSortedWithIndex(int arr[],int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
     v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x.first<<" "<<x.second;

        cout<<endl;
    }
}

int main(){
    int arr[] = {20, 10, 5, 40};
    printSortedWithIndex(arr, 4);
    return 0;
}