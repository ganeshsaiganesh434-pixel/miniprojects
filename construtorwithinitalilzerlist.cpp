#include<iostream>
using namespace std;
class test{
    public:
    test(int x){
        cout<<"parameterized:"<<x<<endl;

    }

    

};
class Main{
    test t;
    public:
    Main():t(10){}

};
int main(){
    Main m;
return 0;
}