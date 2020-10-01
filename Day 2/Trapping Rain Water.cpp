#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int i, n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (i = 1; i < n; i++)
        {
            if (arr[i] < arr[0])
            {
                sum = sum + (arr[0] - arr[i]);
            }
        }
        cout << sum << endl;
        t--;
    }
}