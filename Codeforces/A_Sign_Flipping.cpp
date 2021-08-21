#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        cin >> n;
        ll x;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(pow(-1, i) * abs(x));
            cout << a[i] << " ";
        }
        cout << endl;
    }
}