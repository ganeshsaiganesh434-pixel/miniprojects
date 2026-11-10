#include<iostream>
#include<queue>
using namespace std;
struct Person
{
    int age;
float height;
Person(int a,float h){
    age =a;
    height=h;
}
};
struct myCmp
{
bool operator()(Person const& p1, Person const& p2) {
        return p1.height < p2.height; // Max Heap based on height
    }

    /* data */
};



int main(){
    priority_queue<Person, vector<Person>, myCmp> pq;

    pq.push(Person(25, 5.9));
    pq.push(Person(30, 6.1));
    pq.push(Person(22, 5.7));

    while (!pq.empty()) {
        cout << pq.top().height << " ";
        pq.pop();
    }

    return 0;
}