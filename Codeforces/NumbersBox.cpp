//INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, m, absmin = INT32_MAX, totnumofneg = 0, ans = 0;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n * m; i++)
        {
            int temp;
            cin >> temp;
            a[i / m][i % m] = temp;
            ans += abs(temp);
            if (temp < 0)
            {
                totnumofneg++;
            }
            if (abs(temp) < absmin)
            {
                absmin = abs(temp);
            }
        }
        // cout << ans << " " << absmin << " " << totnumofneg << endl;
        // ans = ans - (totnumofneg % 2 - 1) * absmin;
        cout << ans - 2 * (totnumofneg % 2) * absmin << endl;
    }
}