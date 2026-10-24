#include<iostream>
#include<deque>
using namespace std;
deque<int>dq;
void insertMin(int x){
    dq.push_front(x);
}
void insertMax(int x){
    dq.push_back(x);
}
int getMin(){
    return dq.front();
}
int getMax(){
    return dq.back();
}
void extractMin(){
    dq.pop_front();

}
void extractMax(){
    dq.pop_back();
}
int main(){
    insertMin(5);
    insertMax(10);
    insertMin(3);
    insertMax(15);
    insertMin(2);

    cout << getMin() << endl;
    cout << getMax() << endl;
    
    insertMin(1);
    
    cout << getMin() << endl;
    
    insertMax(20);
    
    cout << getMax() << endl;

    return 0;
}