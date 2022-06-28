#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll size;
        cin >> size;
        ll n = 0, p = 0, z = 0;
        vector<ll> ps, ns;
        for (ll i = 0; i < size; i++)
        {
            ll temp;
            cin >> temp;
            if (temp > 0)
            {
                ps.push_back(temp);
            }
            else if (temp < 0)
            {
                ns.push_back(temp);
            }
            else
            {
                z++;
            }
        }
        n = ns.size();
        p = ps.size();
        string ans = "no";
        if (z > 0)
        {
            if (n + p <= 1)
            {
                ans = "yes";
            }
            else if ((n == 1) && (p == 1) && (ns[0] + ps[0] == 0))
            {
                ans = "yes";
            }
        }
        else
        {
            if (((n == 1) && (p == 2) && ((ns[0] + ps[0] == 0) || (ns[0] + ps[1] == 0))) || ((n == 2) && (p == 1) && (ns[0] + ps[0] == 0 || ns[1] + ps[0] == 0)))
            {
                ans = "yes";
            }
            else if (n == 2 && p == 2)
            {
                map<ll, bool> m;
                m[ns[0]] = true;
                m[ns[1]] = true;
                m[ps[0]] = true;
                m[ps[1]] = true;
                if (m[ns[0] + ns[1] + ps[0]] && m[ns[0] + ns[1] + ps[1]] && m[ns[0] + ps[0] + ps[1]] && m[ns[1] + ps[0] + ps[1]])
                {
                    ans = "yes";
                }
            }
        }
        cout << ans << endl;
    }
}