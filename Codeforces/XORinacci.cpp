#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int a[3], n;
        cin >> a[0] >> a[1] >> n;
        a[2] = a[0] ^ a[1];
        cout << a[n % 3] << endl;
    }
}