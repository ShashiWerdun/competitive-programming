#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    ll n;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}