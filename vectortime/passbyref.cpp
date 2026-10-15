#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>&v){



    v.push_back(30);
    v.push_back(40);

}
int main(){
    vector<int>v{10,20,30};
    fun(v);
    for(auto x:v){
        cout<<x<<" ";
    }
return 0;
}