#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        cin >> n;
        int arr[n], max = 0;
        cin >> arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] + arr[i - 1] > max)
            {
                max = arr[i] + arr[i - 1];
            }
        }
        if (arr[0] + arr[n - 1] > max)
        {
            max = arr[0] + arr[n - 1];
        }
        cout << max << endl;
    }
}