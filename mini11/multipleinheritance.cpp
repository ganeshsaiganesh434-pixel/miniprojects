#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    void set_roll(int r){
        roll=r;
    }
    int get_roll(){
        return roll;
    }
};
class test:public student{
    float marks[5];
    public:
    void set_marks(float arr[5]){
        for(int i=0;i<5;i++){
            marks[i]=arr[i];
        }
    }
    float* get_marks(){
        return marks;;
    }
};
class result:public test{
    public:
     void display(){
        float* m=get_marks();
        float total=0;
        for(int i=0;i<5;i++){
            total+=m[i];
        }
float avg=total/5;
cout<<get_roll()<<" "<<total<<" "<<avg<<endl;
    }
};



int main() {
    result r;

    float marks[5];

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    r.set_roll(1);
    r.set_marks(marks);

    r.display();

    return 0;
}