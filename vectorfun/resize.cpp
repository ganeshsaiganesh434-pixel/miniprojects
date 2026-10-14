#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,30,40};
    v.resize(3);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.resize(5);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.resize(9,100);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;

}
