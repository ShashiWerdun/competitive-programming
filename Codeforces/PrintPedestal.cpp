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
        int base = n / 3;
        int remainder = n % 3;
        if (remainder == 0)
        {
            cout << base << " " << base + 1 << " " << base - 1 << endl;
        }
        else if (remainder == 1)
        {
            cout << base << " " << base + 2 << " " << base - 1 << endl;
        }
        else
        {
            cout << base + 1 << " " << base + 2 << " " << base - 1 << endl;
        }
    }
}