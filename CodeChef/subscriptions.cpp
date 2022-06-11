#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, x;
        cin >> n >> x;
        cout << (n / 6 + (n % 6 + 5) / 6) * x << endl;
    }
}