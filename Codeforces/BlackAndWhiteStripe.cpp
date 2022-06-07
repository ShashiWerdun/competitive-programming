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
        string s;
        cin >> s;
        int ans = k, count = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
            {
                count++;
            }
        }
        if (count < ans)
        {
            ans = count;
        }
        for (int i = k; i < n; i++)
        {
            if (s[i - k] == 'W')
            {
                count--;
            }
            if (s[i] == 'W')
            {
                count++;
            }
            if (count < ans)
            {
                ans = count;
            }
        }
        cout << ans << endl;
    }
}