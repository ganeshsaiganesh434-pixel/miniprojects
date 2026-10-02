#include<iostream>
#include<memory>
using namespace std;
class test{
    int x;
    public:
    test(int a=0){
        x=a;
        cout<<"constructor\n";

    
    }
    ~test(){
        cout<<"destructor\n";
    }
void fun(){
    cout<<x<<endl;
}


};

int main(){
    cout<<"main begins\n ";
{
    /// unique_ptr<test>ptr=make_unique<test>(10)
     //uniqueptr<test>ptr(new test(9));
     unique_ptr<test> ptr(new test(9));
     ptr->fun();
} 
cout<<"mainends\n";
return 0;

}