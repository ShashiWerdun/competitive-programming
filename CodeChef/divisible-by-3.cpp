#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int a, b;
        cin >> a >> b;
        int x = a % 3, y = b % 3;
        if (x == 0 || y == 0)
        {
            cout << 0 << endl;
        }
        else if (x == y)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}