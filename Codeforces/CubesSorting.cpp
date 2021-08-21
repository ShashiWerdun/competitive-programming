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
        ll a[n];
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                ans = "YES";
            }
        }
        cout << ans << endl;
    }
}