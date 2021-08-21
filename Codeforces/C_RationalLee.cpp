#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n, k;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        cin >> n >> k;
        vector<ll> a;
        vector<int> b;
        int c = 0;
        ll x, h = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        n = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            if (x == 1)
            {
                h += 2 * a.back();
                a.pop_back();
                c++;
            }
            else
            {
                b.push_back(x);
            }
        }
        sort(b.begin(), b.end());
        n = a.size();
        for (int i = 0; i < k - c; i++)
        {
            h += a[n - 1 - i];
        }
        x = 0;
        for (int i = 0; i < k - c; i++)
        {
            h += a[x];
            x += b[i];
        }
        cout << h << endl;
    }
    return 0;
}