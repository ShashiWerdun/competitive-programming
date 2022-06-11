#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int x, y;
        cin >> x >> y;
        cout << max(0, x - y) << endl;
    }
}