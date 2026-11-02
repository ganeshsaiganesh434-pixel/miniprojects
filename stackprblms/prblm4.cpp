#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        stack<int>s;
        int n=arr.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&s.top()>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i]=-1;
            }else{
                ans[i]=s.top();
            

            }
            s.push(arr[i]);
          
        }
        return ans;

    }
};




int main() {
    vector<int> arr = {8, 8, 2, 2, 4, 9, 1, 1, 5, 10};

    Solution obj;
    vector<int> ans = obj.nextSmallerEle(arr);

    cout << "Next Smaller Elements:\n";
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}