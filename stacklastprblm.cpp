#include<iostream>
#include<vector>
#include<stack>
#include<cmath>
using namespace std;
int evaluatePostfix(vector<string>&arr){
    stack<long long >s;
    for(string token:arr){
        if(token=="+"||token=="-"||token=="*"||token=="/"||token=="^"){
            long long b=s.top();
            s.pop();
            long long a=s.top();
            s.pop();
            if(token=="+"){
                s.push(a+b);
            }
            else if(token=="-"){
                s.push(a-b);
            }
            else if(token=="*"){
                s.push(a*b);
            }
            else if(token=="/"){
                s.push(floor((double)a/b));
            }
            else if(token=="^"){
                s.push(pow(a,b));
            }

        }
        else{
            s.push(stoi(token));
        }
    }
    return s.top();

}


int main() {
    vector<string> arr = {
        "2", "3", "1", "*", "+", "9", "-"
    };

    cout << "Result = " << evaluatePostfix(arr);

    return 0;
}