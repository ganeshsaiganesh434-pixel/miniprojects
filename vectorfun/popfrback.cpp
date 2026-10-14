#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,30,40,50};
    v.pop_back();
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<v.front()<<" ";
    cout<<v.back()<<" ";
    return 0;
}
