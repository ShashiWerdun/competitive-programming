//INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, temp = 1, b, af = 1, bf = 1, ans;
    cin >> a >> b;
    while (a != 1)
    {
        af *= a--;
        // cout << af << endl;
    }
    while (b != 1)
    {
        bf *= b--;
        // cout << bf << endl;
    }
    if (bf > af)
    {
        temp = bf;
        bf = af;
        af = temp;
    }
    for (int i = 1; i <= bf; ++i)
    {
        if (af % i == 0 && bf % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << endl;
    // cout << af << " " << bf << endl;
}