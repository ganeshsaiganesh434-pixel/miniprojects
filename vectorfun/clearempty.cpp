#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,30,40,50};
    v.clear();
    cout<<v.size()<<" ";
    if(v.empty()==true){
        cout<<"empty";
    }
    else{
        cout<<"not empty";
    }
    return 0;
}