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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int po[n], pe[n];
        string ans = "no";
        pe[0] = 0;
        po[0] = 1;
        for (int i = 1; i < n; i++)
        {
            pe[i] = (pe[i - 1] + b[i - 1]) % 2;
            po[i] = (po[i - 1] + b[i - 1]) % 2;
        }
        if (((pe[0] + pe[n - 1]) % 2 == b[n - 1]) || ((pe[0] + pe[n - 1]) % 2 == b[n - 1]))
        {
            ans = "yes";
        }
        cout << ans << endl;
    }
}