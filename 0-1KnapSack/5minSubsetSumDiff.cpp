#include <bits/stdc++.h>
using namespace std;

int findMinRec(int arr[], int n, int sumCalculated,int sumTotal)
{
    
    if (n == 0)
        return abs((sumTotal - sumCalculated) - sumCalculated);


    return min(
        findMinRec(arr, n - 1, sumCalculated + arr[n - 1],sumTotal),findMinRec(arr, n - 1, sumCalculated, sumTotal));
}
int findMin(int arr[], int n)
{
    // Compute total sum of elements
    int sumTotal = 0;
    for (int i = 0; i < n; i++)
        sumTotal += arr[i];

    return findMinRec(arr, n, 0, sumTotal);
}

int main()
{
    int arr[] = {20,19,18,20,16};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The minimum difference between two sets is "
         << findMin(arr, n);
    return 0;
}
