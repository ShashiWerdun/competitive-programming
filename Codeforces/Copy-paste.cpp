#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, k;
        cin >> n >> k;
        int a[n], x, min = pow(10, 4);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[i] = k - x;
            if (x < min)
            {
                min = x;
            }
        }
        sort(a, a + n);
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += a[i] / min;
        }
        cout << ans << endl;
    }
}