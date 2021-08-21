#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, sum = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        if (sum <= n / 2)
        {
            cout << n - sum << endl;
            for (int i = 0; i < n - sum; i++)
            {
                cout << 0 << " ";
            }
        }
        else
        {
            int ans = sum - sum % 2;
            cout << ans << endl;
            for (int i = 0; i < ans; i++)
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
}