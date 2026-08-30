#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"default\n";
    }
    test(int x){
        cout<<"parametarized\n";
    }


};
class Main{
    test t;
    public:
    Main(){
        t=test(10);
    }

};
int main(){
    Main m;
    return 0;


}