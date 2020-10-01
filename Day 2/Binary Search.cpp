#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int i, int n, int k);
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int result = binary(arr, 0, n - 1, k);
    cout << resule return 0;
}
int binary(int arr[], int i, int n, int k)
{
    int start = i;
    int end = n;
    if (end >= start)
    {
        int middle = (start + (end - start)) / 2;
        if (arr[mid] == k)
        {
            return arr[middle];
        }
        if (arr[mid] > x)
        {
            return binary(arr, i, mid - 1, n, k)
        }
        return binary(arr, mid + 1, n, k)
    }
    else if ()
}
