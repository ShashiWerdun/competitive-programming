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
        ll k;
        cin >> n >> k;
        ll a[n], max = -pow(10, 9), min = pow(10, 9), b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
            if (min > a[i])
            {
                min = a[i];
            }
        }
        if (n == 1)
        {
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = max - a[i];
        }
        max -= min;
        for (int i = 0; i < n; i++)
        {
            b[i] = max - a[i];
        }
        if (k % 2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
}
