#include<iostream>
using namespace std;
class SP{
    int *ptr;
    public:
    SP(int *p=NULL){
        ptr=p;

    }
    ~SP(){
        delete ptr;

    }
    int& operator*(){
        return *ptr;
    }
};

int main(){
    SP sp(new int(10));
    *sp=20;
    cout<<*sp;

}
