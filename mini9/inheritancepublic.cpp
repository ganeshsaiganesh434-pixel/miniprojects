#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    Base(int a):x(a){
        cout<<"Base"<<endl;
    }

};
class Derived:public Base{
    private:
    int y;
    public:
    Derived(int a,int b):Base(a),y(b){
        cout<<"Derived"<<endl;
    }
        void print(){
        cout<<x<<"" <<y<<endl;
        }

};
int main(){
    Derived d(10,20);
    d.print();
    cout<<d.x<<endl;
    return 0;

}