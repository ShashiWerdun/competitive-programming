#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n, k, x;
        cin >> n >> k;
        ll a[n], half = k / 2, otherHalf = k / 2;
        int b[n];
        vector<int> c;
        if (k % 2 == 1)
        {
            otherHalf++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[i] = x;
            if ((x > k) || (x < k / 2))
            {
                b[i] = 1;
            }
            else if ((x == half) || (x == otherHalf))
            {
                c.push_back(i);
            }
            else
            {
                b[i] = 0;
            }
        }
        if (k % 2 == 0)
        {
            for (int i = 0; i < c.size(); i++)
            {
                b[c[i]] = i % 2;
            }
        }
        else
        {
            for (int i = 0; i < c.size(); i++)
            {
                if (a[c[i]] == half)
                {
                    b[c[i]] = 0;
                }
                else
                {
                    b[c[i]] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}