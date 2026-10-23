#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq={10,20};
    auto it=dq.begin();
    dq.insert(it,6);
    for(int x:dq){
        cout<<x<<" ";
    }
    return 0;

}