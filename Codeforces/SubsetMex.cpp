#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, x, ans = 0, count = 2;
        cin >> n;
        int a[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        int i;
        for (i = 0; i < 100; i++)
        {
            if (a[i] == 0)
            {
                ans += 2 * i;
                count = 0;
                break;
            }
            else if (a[i] == 1)
            {
                ans += i;
                count = 1;
                break;
            }
        }
        if (count == 1)
        {
            while (a[i] != 0)
            {
                i++;
            }
            ans += i;
        }
        cout << ans << endl;
    }
}