#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>l;
    l.assign({10,20,30,40,50});
    forward_list<int>l2;
   l2.assign(l.begin(),l.end());
    l.remove(10);
    l.remove(20);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(auto i=l2.begin();i!=l2.end();i++){
        cout<<(*i)<<" ";
    }
  
return 0;
}