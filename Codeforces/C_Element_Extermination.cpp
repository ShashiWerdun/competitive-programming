#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n, i;
    bool no = false;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        i = 1;
        while (a[i] == a[i - 1] + 1)
        {
            if (a[i] == n)
            {
                no = true;
                break;
            }
            i++;
        }
        i = n - 1;
        while (a[i] - 1 == a[i - 1])
        {
            if (a[i - 1] == 1)
            {
                no = true;
                break;
            }
            i++;
        }
        if (a[0] == n || a[n - 1] == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}