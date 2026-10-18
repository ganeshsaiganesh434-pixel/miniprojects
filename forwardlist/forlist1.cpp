#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>a={10,20,30};
    a.push_front(5);
    a.push_front(6);
    a.pop_front();
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;

}