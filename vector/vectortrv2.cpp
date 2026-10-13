#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,30};
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}