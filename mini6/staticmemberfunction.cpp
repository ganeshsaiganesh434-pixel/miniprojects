#include<iostream>
using namespace std;
class player{
    private:
    static int count;
    public:
    player(){
        count++;
    }
    ~player(){
        count--;

    }
    static int getcount(){
        return count;
    }
};
int player::count=0;
int main(){
    player p1,p2;
    cout<<player::getcount()<<" ";

}