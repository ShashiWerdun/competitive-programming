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
        ll b[n], nsum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            nsum += b[i];
        }
        ll sum = nsum / (n + 1);
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i] - sum;
            cout << a[i] << " ";
        }
        cout << endl;
    }
}