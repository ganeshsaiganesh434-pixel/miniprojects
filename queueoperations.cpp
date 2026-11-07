#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q; 

    q.push(10); 
    q.push(20);  
    q.push(30);  

    cout << "Front: " << q.front() << " Back: " << q.back() << endl;

    q.pop(); 

    cout << "Front: " << q.front() << " Back: " << q.back() << endl;

    return 0;
}