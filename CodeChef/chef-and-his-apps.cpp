#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int rem = s - z;
        if (x + y <= rem)
        {
            cout << 0 << endl;
        }
        else if (min(x, y) <= rem)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}