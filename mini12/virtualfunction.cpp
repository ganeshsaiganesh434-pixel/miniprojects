#include<iostream>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"in Base"<<endl;
    }

};
class Derived:public Base{
    public:
    void print () override{
        cout<<"in derived"<<endl;
    }
};



int main() {
    Base b;
    Derived d;

    b.print(); // Output: In Base
    d.print(); // Output: In Derived

    Base *bp = &d;
    bp->print(); // Output: In Derived
}