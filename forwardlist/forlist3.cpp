#include<iostream>
#include<forward_list>
using namespace std;
int main(){

    forward_list<int>l;
    l.assign(5,10);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<(*it)<<" ";
    }
    
    
}