#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n, r, shapes = 0;
        cin >> n >> r;
        // for (int k = 1; k < r && k < n; k++)
        // {
        //     shapes += k;
        // }
        if (r < n)
        {
            shapes += (r - 1) * (r) / 2;
            shapes += r;
        }
        else
        {

            shapes += (n - 1) * (n) / 2;
            shapes += 1;
        }
        cout << shapes << endl;
    }
}