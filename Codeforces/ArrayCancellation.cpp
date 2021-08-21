#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll nsum = 0, psum = 0, free = 0;
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                psum += a[i];
                free += min(abs(nsum), a[i]);
                nsum += a[i];
            }
            else
            {
                nsum += a[i];
            }
            if (nsum > 0)
            {
                nsum = 0;
            }
        }
        cout << psum - free << endl;
    }
}