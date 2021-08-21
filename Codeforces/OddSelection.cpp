//https://codeforces.com/contest/1363/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n, x, y, neven, nodd;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        neven = 0, nodd = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            if (y % 2 == 0)
            {
                neven++;
            }
            else
            {
                nodd++;
            }
        }
        if (x == 0)
        {
            cout << "Yes" << endl;
        }
        else if (x == n)
        {
            if (nodd % 2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (x < n)
        {
            if (nodd && x % 2)
            {
                cout << "Yes" << endl;
            }
            else if (nodd && neven && !(x % 2))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}