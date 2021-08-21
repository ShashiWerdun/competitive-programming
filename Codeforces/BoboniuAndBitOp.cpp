#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    ll a[n], b[m], c[n], ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] & b[0];
        for (int j = 0; j < m; j++)
        {
            if (b[j] & a[i] < c[i])
            {
                c[i] = b[j] & a[i];
            }
        }
    }
    ans = c[0];
    for (int i = 1; i < n; i++)
    {
        ans |= c[i];
    }
    cout << ans << endl;
}