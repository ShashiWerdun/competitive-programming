#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, k;
        cin >> n >> k;
        if (n == k)
        {
            cout << 0 << endl;
        }
        else if (n > k && (n + k) % 2 == 1)
        {
            cout << 1 << endl;
        }
        else if (n > k && (n + k) % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << k - n << endl;
        }
    }
}