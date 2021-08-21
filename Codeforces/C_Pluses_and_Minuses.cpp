//incomplete
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        string s;
        cin >> s;
        ll res = 0;
        for (ll i = 0;; i++)
        {
            ll cur = i;
            bool ok = true;
            for (int j = 1; j <= s.size(); j++)
            {
                res++;
                if (s[j] == '+')
                {
                    cur++;
                }
                else
                {
                    cur--;
                }
                if (cur < 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                break;
            }
        }
        cout << res << endl;
    }
}