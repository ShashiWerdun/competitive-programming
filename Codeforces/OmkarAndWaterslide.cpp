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
        ll a[n], min = pow(10, 9), max = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        min = a[n - 1];
        for (int i = 1; i < n; i++)
        {
            if (a[n - 1 - i] > a[n - 1 - i + 1])
            {
                ans += a[n - 1 - i] - min;
                min = a[n - 1 - i];
            }
            else if (a[n - 1 - i] < min)
            {
                min = a[n - 1 - i];
            }
        }
        cout << ans << endl;
    }
}