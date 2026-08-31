#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int x,int y){
        this->x=x;
        this->y=y;
        cout<<x<<y;
    }


};
int main(){
    point p1(10,20),p2(5,5);

}