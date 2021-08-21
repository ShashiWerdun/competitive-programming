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
        int x, prev = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == prev)
            {
                prev++;
                count++;
            }
            else if (x > prev)
            {
                count++;
                prev = x;
            }
        }
        cout << count << endl;
    }
}