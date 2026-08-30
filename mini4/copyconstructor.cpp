#include<iostream>
using namespace std;
class test
{
private:
int *ptr;
    /* data */
public:
    test(int x){
        ptr=new int(x);

    };
    test(const test &t){
        ptr=new int(*(t.ptr));


    }
    void set(int x){
        *ptr=x;
    }
    void print(){
        cout<<*ptr<<endl;
    }
    ~test(){
        delete ptr;
    };
};

int main(){
    test t1(10);
    test t2=t1;
    t2.set(20);
     t1.print();
     t2.print();

}