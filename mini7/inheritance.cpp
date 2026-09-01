#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int id;
    public:
    person(string n,int i):name(n),id(i){}
};
class student:public person{
    private:
    int marks;
    public:
    student(string n,int i,int m):person(n,i),marks(m){}
void print(){
    cout<<name<<" "<<id<<" "<<marks<<endl;
}
};
int main(){
    student stu("rahul",1001,88);
    stu.print();
    return 0;

}
