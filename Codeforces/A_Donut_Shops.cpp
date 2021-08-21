#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll a, b, c, c1 = -1, c2 = -1;
        cin >> a >> b >> c;
        for (ll x = 1; x < b; x++)
        {
            if (x * a < ((x / b) + 1) * c)
            {
                c1 = x;
                break;
            }
            else if (x * a > ((x / b) + 1) * c)
            {
                c2 = x;
                break;
            }
        }
        if (b * a > c && c2 == -1)
        {
            c2 = b;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}