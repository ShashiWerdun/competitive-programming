// INCOMPLETE
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
        int a, b;
        if (n % 2 == 0)
        {
            a = n / 2;
            b = n / 2 + 1;
        }
        else
        {
            a = (n - 1) / 2;
            b = (n + 1) / 2;
            cout << b << " ";
            b++;
        }
        while (b <= n)
        {
            cout << a << " ";
            cout << b << " ";
            a--;
            b++;
        }
        cout << endl;
    }
}