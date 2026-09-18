#include<iostream>
using namespace std;
class employee;
class Printer
{
    public:
    void printemp(const employee &e );
};
class employee{
    private:
    int id;
    string name;
    friend void Printer::printemp(const employee &e);
    public:
    
    employee(int i, string n) : id(i), name(n) {}
   
};
void Printer::printemp(const employee &e){
    cout<<e.id<<" "<<e.name<<endl;
}



int main() {
    Printer p;
    employee e(101, "ABC");
    p.printemp(e); // Output: 101 ABC
    return 0;
}