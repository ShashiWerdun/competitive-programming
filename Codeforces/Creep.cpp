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
        int x = min(a, b);
        int out = 0;
        if (x == a)
        {
            out = out ^ 1;
        }
        for (int i = 0; i < x; i++)
        {
            cout << out << (out ^ 1);
        }
        for (int i = 2 * x; i < a + b; i++)
        {
            cout << out;
        }
        cout << endl;
    }
}