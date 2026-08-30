#include<iostream>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point():x(0),y(0){}
    point(int x1,int y1):x(x1),y(y1){}
    void print(){
        cout<<x<<" "<<y<<endl;
    }

};
int main(){
    point p1,p2(10,20);
    p1.print();
    p2.print();
    return 0;

}