#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    unsigned ll a[t];
    unsigned ll temp = 0;
    for (int cases = 0; cases < t; cases++)
    {
        cin >> a[cases];
        temp ^= a[cases];
    }
    for (int i = 0; i < t - 1; i++)
    {
        cout << (temp ^ a[i]) << " ";
    }
    cout << (temp ^ a[t - 1]) << endl;
}