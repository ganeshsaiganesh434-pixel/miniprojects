#include <iostream>
using namespace std;

template <typename T, int limit>
T arrMax(T arr[], int n)
{
    if(n > limit){
        // error message code
    }
    T res = arr[0];
    for (int i = 1; i < n; i++)
      if (arr[i] > res)
        res = arr[i];
  return res;
}

int main()
{
    int arr1[] = {10, 40, 30};
    cout << arrMax<int,100>(arr1, 3) << " ";
    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax<float, 50>(arr2, 4);

    return 0;
}