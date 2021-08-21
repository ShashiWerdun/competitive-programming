#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, mini = pow(10, 9), k = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mini)
            {
                mini = a[i];
            }
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (b[i] % mini != 0)
                {
                    k = 1;
                    break;
                }
            }
        }
        if (k == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}