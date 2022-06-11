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
        string a, b;
        cin >> n;
        cin >> a >> b;
        bool replace[26] = {false};
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                replace[b[i] - 97] = true;
            }
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (replace[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}