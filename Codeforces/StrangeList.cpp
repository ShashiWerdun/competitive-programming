#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n, x, temp = 0, ans = 0, multi = 1;
        cin >> n >> x;
        ll a[n], limitindex = n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i];
            if (a[i] % x != 0)
            {
                limitindex = min(i, (int)limitindex);
            }
            a[i] /= x;
        }
        multi *= x;
        while (limitindex == n)
        {
            for (int i = 0; i < n; i++)
            {
                ans += multi * a[i];
                if (a[i] % x != 0)
                {
                    limitindex = min(i, (int)limitindex);
                }
                else
                {
                    a[i] /= x;
                }
            }
            multi *= x;
        }
        for (int i = 0; i < limitindex; i++)
        {
            ans += multi * a[i];
        }
        cout << ans << endl;
    }
}