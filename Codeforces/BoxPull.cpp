#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int x1, y1, x2, y2, ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        ans += abs(x1 - x2) + abs(y1 - y2);
        if ((x1 - x2) != 0 && (y1 - y2) != 0)
        {
            ans += 2;
        }
        cout << ans << endl;
    }
}