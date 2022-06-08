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
        int b[n], min, max;
        cin >> b[0];
        min = b[0];
        max = b[0];
        string ans = "yes";
        for (int i = 1; i < n; i++)
        {
            cin >> b[i];
            if (ans == "yes")
            {
                if (b[i] >= max)
                {
                    max = b[i];
                }
                else if (b[i] <= min)
                {
                    min = b[i];
                }
                else
                {
                    ans = "no";
                }
            }
        }
        cout << ans << endl;
    }
}