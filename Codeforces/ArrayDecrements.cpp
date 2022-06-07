// INCOMPLETE
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
        int a[n], b[n], required_diffs[n], diff = -1;
        string answer = "yes";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            required_diffs[i] = a[i] - b[i];
            if (diff == -1)
            {
                if (b[i] > 0 && required_diffs[i] >= 0)
                {
                    diff = required_diffs[i];
                }
            }
        }
        if ((n == 1) && (a[0] >= b[0]))
        {
            cout << "yes" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                if (required_diffs[i] > diff)
                {
                    answer = "no";
                    break;
                }
            }
            else
            {
                if (required_diffs[i] != diff)
                {
                    answer = "no";
                    break;
                }
            }
        }
        cout << answer << endl;
    }
}