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
        int a[n], min = INT_MAX, mini;
        string ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
            {
                min = a[i];
                mini = i;
            }
        }
        if (n % 2 == 1)
        {
            ans = "Mike";
        }
        else if (mini % 2 == 0)
        {
            ans = "Joe";
        }
        else
        {
            ans = "Mike";
        }
        cout << ans << endl;
    }
}