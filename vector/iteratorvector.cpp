#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=3,x=10;
    vector<int>v(n,x);
    for(auto i=v.begin();i!=v.end();i++){
        cout<<(*i)<<" ";
    }
return 0;
}