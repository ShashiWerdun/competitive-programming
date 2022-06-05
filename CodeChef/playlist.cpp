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
        int answer = (n / (3 * x));
        cout << answer << endl;
    }
}