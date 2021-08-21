#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ull a, b, n, m;
        cin >> a >> b >> n >> m;
        if ((a > b && m > b) || (b >= a && m > a) || (n + m > a + b))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}