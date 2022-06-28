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
        int piles[n];
        cin >> piles[0];
        cin >> piles[1];
        int ans = 0;
        for (int i = 2; i < n; i++)
        {
            cin >> piles[i];
            if (piles[i - 2] + piles[i] < piles[i - 1])
            {
                ans++;
            }
        }
        if (k == 1)
        {
            ans = n / 2 - (n - 1) % 2;
        }
        cout << ans << endl;
    }
}