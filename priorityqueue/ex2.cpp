#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout << "Size of priority queue: " << pq.size() << endl;
    cout << "Top element: " << pq.top() << endl;

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}