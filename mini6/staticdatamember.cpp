#include<iostream>
using namespace std;
class player{
    public:
    static int count;
    player(){
        count++;
    }
    ~player(){
        count--;
    }
   
};
  int player::count=0;
int main(){
    player p1;
    cout<<player::count<<" ";
    player p2;
    cout<<player::count<<" ";

}