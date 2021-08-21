//https://codeforces.com/contest/1366/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll a, b, count = 0, temp;
        cin >> a >> b;
        temp = a > b ? a : b;
        b = a + b - temp;
        a = temp;
        if (a == 0 || b == 0)
        {
            cout << "0" << endl;
        }
        else if (b <= a / 2)
        {
            cout << b << endl;
        }
        else if (a == b)
        {
            cout << (a / 3) * 2 << endl;
        }
        else
        {
            temp = (2 * b - a) / 3;
            count += temp;
            b -= 2 * temp;
            count += b;
            cout << count << endl;
        }
    }
    return 0;
}