#include<iostream>
#include<vector>
using namespace std;
void fun(const vector<int>&v){
    for(int x:v){
        cout<<x<<" ";
    }


}
int main(){
    vector<int>v{10,20,30};
    fun(v);
    return 0;

}