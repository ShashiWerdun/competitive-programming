#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        unsigned int x, y = 1, ans;
        cin >> x;
        if (x == 1)
        {
            cout << 3 << endl;
            continue;
        }
        while ((x & y) == 0)
        {
            y = y << 1;
        }
        if ((x ^ y) == 0)
        {
            y++;
        }
        cout << y << endl;
    }
}