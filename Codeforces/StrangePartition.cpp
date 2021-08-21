#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, x, min = 0, max = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max += a[i] / x;
            min += a[i];
            if (a[i] % x != 0)
            {
                max++;
            }
        }
        int ansmin = min / x;
        cout << min << endl;
        if (min % x != 0)
        {
            ansmin++;
        }
        cout << ansmin << " " << max << endl;
    }
}