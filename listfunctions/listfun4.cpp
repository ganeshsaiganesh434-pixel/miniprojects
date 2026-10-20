#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l={10,15,15,20,20,10};
    l.unique();
    l.sort();
    l.reverse();
    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;

}