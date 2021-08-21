//INCOMPLETE

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

ull f(int x)
{
    return (x * (x + 1) * (4 * x - 1) / 6);
}

int findAns(ll n)
{
    int up = 1000000, down = 1;
    int ans = (up + down) / 2;
    while (true)
    {
        if ((f(ans) <= n) && (f(ans + 1) > n))
        {
            cout << f(30) << " " << f(31) << " " << n << " ";
            break;
        }
        else if (n < f(ans))
        {
            up = ans;
        }
        else if (n > f(ans))
        {
            down = ans;
        }
        ans = (up + down) / 2;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n;
        cin >> n;
        int ans = 500000;
        ans = findAns(n);
        cout << ans << endl;
    }
}