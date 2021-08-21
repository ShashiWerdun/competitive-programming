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
        int min_wt, p, f, cnts, cntw, s, w, ans = 0;
        cin >> p >> f;
        cin >> cnts >> cntw;
        cin >> s >> w;
        min_wt = s < w ? s : w;
        int min_cnt = s < w ? cnts : cntw;
        if (min_cnt >= p / min_wt)
        {
            ans += p / min_wt;
            p %= min_wt;
            min_cnt -= p / min_wt;
        }
        else
        {
            ans += min_cnt;
            min_cnt = 0;
        }
        if (min_cnt >= f / min_wt)
        {
            ans += f / min_wt;
            f %= min_wt;
            min_cnt -= f / min_wt;
        }
        min_cnt = cnts + cntw - min_cnt;
        min_wt = s + w - min_wt;
        if (min_cnt >= p / min_wt)
        {
            ans += p / min_wt;
            p %= min_wt;
            min_cnt -= p / min_wt;
        }
        if (min_cnt >= f / min_wt)
        {
            ans += f / min_wt;
            f %= min_wt;
            min_cnt -= f / min_wt;
        }
        cout << ans << endl;
    }
}