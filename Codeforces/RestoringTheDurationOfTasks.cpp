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
        cin >> n;
        int s[n], f[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        int start = 0, prev_finish = 0;
        int d[n];
        d[0] = f[0] - s[0];
        cout << d[0] << " ";
        for (int i = 1; i < n; i++)
        {
            d[i] = f[i] - max(s[i], f[i - 1]);
            cout << d[i] << " ";
        }
        cout << endl;
    }
}