#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int x1, y1, z1, x2, y2, z2, ans = 0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        z2 -= x1;
        ans += 2 * min(z1, y2);
        if (min(z1, y2) == y2)
        {
            z2 -= z1 - y2;
        }
        if (z2 > 0)
        {
            ans -= 2 * min(z2, y1);
        }
        cout << ans << endl;
    }
}