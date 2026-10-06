#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    auto lambda_expr=[=](int a)mutable{
        x=x+a;
        y=y+a;
    };
    lambda_expr(20);
    cout<<x<<' '<<y<<"\n";
    return 0;

}