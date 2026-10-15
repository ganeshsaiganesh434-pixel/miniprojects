#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>v){
    v.push_back(10);
    v.push_back(20);
}
int main(){
    vector<int>v{10,20,30};
    fun(v);
for(int x:v){
    cout<<x<<" ";
}
return 0;
}