#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l={10,20,30};
    auto it=l.begin();
    it++;
    it=l.insert(it,15);
    l.insert(it,2,7);
    cout<<l.front()<<" "<<l.back();
    cout<<" "<<l.size();
    return 0;
}