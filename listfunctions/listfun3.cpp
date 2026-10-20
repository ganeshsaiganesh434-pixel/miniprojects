#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={10,20,30};
    list<int>l2={5,15,25};
    l1.merge(l2);
    for(auto x:l1){
        cout<<x<<" ";
    }
    return 0;
}