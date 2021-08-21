#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, m, flag = 0;
        cin >> n >> m;
        int a[2][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    cin >> a[j][k];
                }
            }
            if (a[0][1] == a[1][0])
            {
                flag = 1;
            }
        }
        if (m % 2 == 1)
        {
            flag = 0;
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
}