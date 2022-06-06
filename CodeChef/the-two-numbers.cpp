#include <bits/stdc++.h>
using namespace std;
#define ll long long

int get_gcd(int a, int b)
{
    int r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n;
        cin >> n;
        if (n == 2)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 1)
        {
            cout << ((n - 1) / 2 * (n + 1) / 2) - 1 << endl;
        }
        else if (n % 2 == 0)
        {
            if ((n / 2) % 2 == 0)
            {
                cout << (n / 2 - 1) * (n / 2 + 1) - 1 << endl;
            }
            else
            {
                cout << (n / 2 - 2) * (n / 2 + 2) - 1 << endl;
            }
        }
    }
}