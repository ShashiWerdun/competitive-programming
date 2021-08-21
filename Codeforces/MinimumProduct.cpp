#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll a, b, x, y, n, a1, b1, a2, b2;
        cin >> a >> b >> x >> y >> n;
        b1 = max(y, b - n);
        a1 = max(x, a - n + b - b1);
        a2 = max(x, a - n);
        b2 = max(y, b - n + a - a2);
        cout << min(a1 * b1, a2 * b2) << endl;
    }
}