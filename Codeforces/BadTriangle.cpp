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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] + a[1] > a[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << " " << 2 << " " << n << endl;
        }
    }
}