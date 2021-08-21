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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i % n] == s[(i - 1) % n] && s[i] == s[(i + 1) % n])
            {
                if (s[i % n] == 'R')
                {
                    s[i % n] = 'L';
                }
                else
                {
                    s[i % n] = 'R';
                }
                ans++;
            }
        }
        cout << ans << endl;
    }
}