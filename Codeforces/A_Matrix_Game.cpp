#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n, m;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        string turn = "Ashish";
        cin >> n >> m;
        int a[n] = {0}, b[m] = {0}, x, rc = 0, cc = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                if (x)
                {
                    a[i] = 1;
                    b[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                rc++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] == 0)
            {
                cc++;
            }
        }
        if (min(rc, cc) % 2)
        {
            cout << "Ashish" << endl;
        }
        else
        {
            cout << "Vivek" << endl;
        }
    }
    return 0;
}