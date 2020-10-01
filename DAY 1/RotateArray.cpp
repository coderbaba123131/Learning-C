#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, i, temp;
        int d;
        cin >> n >> d;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int r = d % n;
        for (i = 0; i < n; i++)
        {
            cout << arr[(r + i) % n] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}   
