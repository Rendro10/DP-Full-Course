#include <bits/stdc++.h>
using namespace std;

bool isSubset(int arr[], int n, int sum)
{
    if (sum == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (arr[n - 1] > sum)
    {
        return isSubset(arr, n - 1, sum);
    }
    return isSubset(arr, n - 1, sum) || isSubset(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int sum = 15;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSubset(arr, n, sum) == true)
    {
        cout << "YES present" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
