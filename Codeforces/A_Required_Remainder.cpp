#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        ll k = (n / x) * x + y;
        if (k <= n)
        {
            cout << k << endl;
        }
        else
        {
            cout << k - x << endl;
        }
    }
    return 0;
}