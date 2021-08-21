#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n;
        cin >> n;
        if (n <= 2)
        {
            cout << "1" << endl;
        }
        else if (n == 3)
        {
            cout << "2" << endl;
        }
        else if (n > 3)
        {
            cout << (n + 1) / 2 << endl;
        }
    }
}