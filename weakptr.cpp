#include<iostream>
#include<memory>
using namespace std ;
class Test 
{
    int x;
public:
    Test(int a = 0){ x = a;
        cout<<x<<endl;;
         cout << "Constructor \n"; }
    ~Test() { cout << "Destructor \n"; }
    void fun() { cout << x << endl; }
};

int main()
{
    weak_ptr<Test> p1;
  
    {
        auto p2 = make_shared<Test>(10);
        p1 = p2;
    }
    cout << "Main Ends \n";
    return 0 ;
}