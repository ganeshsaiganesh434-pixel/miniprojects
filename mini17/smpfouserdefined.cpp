#include<iostream>
using namespace std;
class test{
    public:
    int x,y;
    test(int a=0,int b=0){
        x=a;
        y=b;
        cout<<"constructor called\n";
    }
    ~test(){
        cout<<"destructor called\n";
    }


};

int main(){
{
    cout<<"main begins\n";
    {
        test *p=new test(10,20);
    }

}
cout<<"main ends";
return 0;
}