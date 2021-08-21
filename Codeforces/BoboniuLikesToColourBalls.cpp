#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n_odd = 0;
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        if (r % 2 == 1)
        {
            n_odd++;
        }
        if (g % 2 == 1)
        {
            n_odd++;
        }
        if (b % 2 == 1)
        {
            n_odd++;
        }
        if (n_odd == 2 && (w % 2 == 0 || r == 0 || g == 0 || b == 0))
        {
            cout << "NO" << endl;
        }
        else if (n_odd == 1 && w % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}