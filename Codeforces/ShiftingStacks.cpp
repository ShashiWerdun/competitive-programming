//COMPLETED
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
        ll sum = 0;
        string ans = "yes";
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
            if (sum < i * (i + 1) / 2)
            {
                ans = "no";
            }
        }
        cout << ans << endl;
    }
}