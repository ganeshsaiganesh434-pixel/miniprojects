#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseKElements(queue<int>& q, int k){
      if (q.empty() || k > q.size() || k <= 0) {
        return;
    }

    stack<int>s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int n=q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    
    
}
void printQueue(queue<int>q){
   while (!q.empty()){
    /* code */
    cout<<q.front()<<" ";
    q.pop();

   }
   cout<<endl;
    
}
int main(){
        queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    cout << "Original Queue: ";
    printQueue(q);

    reverseKElements(q, k);

    cout << "Modified Queue: ";
    printQueue(q);

    return 0;
}