#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, k, count = 0;
        bool stat = false;
        cin >> n >> k;
        int previ = -k - 1;
        char x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == '1')
            {
                count += (i - previ - 1 - k) / (k + 1);
                previ = i;
                stat = true;
            }
        }
        if (!stat)
        {
            count += (n + k) / (k + 1);
        }
        else
        {
            count += (n - 1 - previ) / (k + 1);
        }
        cout << count << endl;
    }
    return 0;
}