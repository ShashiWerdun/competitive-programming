#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, x;
        cin >> n >> x;
        int a[n], max = 0, min = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max += a[i] / x;
            if (a[i] % x != 0)
            {
                ;
            }
            min += a[i];
        }
        min /= x;
        cout << min << " " << max << endl;
    }
}