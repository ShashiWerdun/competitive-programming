#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll ans = 4 * pow(n, 3) + 3 * pow(n, 2) - n;
    cout << ans << endl;
}