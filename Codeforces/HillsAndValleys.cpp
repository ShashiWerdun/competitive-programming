//PROBABLY INCOMPLETE
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
        int a[n] = {0}, ans = 0;
        char b[n - 2] = {'0'};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 1)
            {
                if ((a[i - 1] < (a[i - 2] < a[i] ? a[i - 2] : a[i])))
                {
                    ans++;
                    b[i - 2] = 'v';
                    // cout << b[i - 2] << " ";
                }
                else if (a[i - 1] > (a[i - 2] > a[i] ? a[i - 2] : a[i]))
                {
                    ans++;
                    b[i - 2] = 'h';
                    // cout << b[i - 2] << " ";
                }
            }
        }
        if (ans == 1)
        {
            ans--;
        }
        bool duet = false, triple = false;
        if (ans > 1)
        {
            ans--;
            for (int i = 0; i < sizeof(b) - 2; i++)
            {
                if (b[i] == b[i + 2] && (b[i] == 'v' || b[i] == 'h'))
                {
                    duet = false;
                    ans -= 2;
                    break;
                }
                else if (b[i] == b[i + 1])
                {
                    duet = true;
                }
            }
        }
        if (duet == true)
        {
            ans--;
        }
        cout << ans << endl;
    }
}