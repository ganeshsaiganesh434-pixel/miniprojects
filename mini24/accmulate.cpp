#include<iostream>
#include<numeric>
#include<vector>
using namespace std ;
int main()
{
    vector<int> v {10, 2, 4, 20, 1};
    
    int res = accumulate(v.begin(), v.end(), 0);
    
    cout << res << '\n';
    
    res = accumulate(v.begin(), v.end(), 1,
        [](int x, int y){return x*y;});
    cout << res;
    return 0 ;
}