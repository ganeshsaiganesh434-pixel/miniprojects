#include<iostream>
#include<algorithm>
using namespace std;

void sortChar(int a[], char b[], int n) {
    pair<int, char> ba[n];
    for (int i = 0; i < n; i++)
        ba[i] = {a[i], b[i]};
    sort(ba, ba + n);
    for (int i = 0; i < n; i++) 
        cout << ba[i].second << " ";
}

int main() 
{
    int a[] = {10, 15, 5};
    char b[] = {'X', 'Y', 'Z'};
    sortChar(a,b,3);
    return 0;
}