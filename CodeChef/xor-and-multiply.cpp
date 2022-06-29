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
        int n, a, b;
        cin >> n >> a >> b;
        int temp = min(a, b);
        b = max(a, b);
        a = temp;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = 1 << i;
            if (temp & a)
            {
            }
        }
    }
}