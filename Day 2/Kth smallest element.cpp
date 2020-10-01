#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int i, n, k;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        sort(arr, arr + n);
        cout << arr[k-1]<<endl;
        t--;
    }
}
// learn from heap too