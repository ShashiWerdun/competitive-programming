#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, x, k;
        cin >> n >> x;
        k = n / 2 + n % 2;
        if (x > k)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < k - 1; i++)
            {
                char a = 97 + i % x;
                cout << a;
            }
            char temp = 97 + (k - 1) % x;
            if (n % 2 == 0)
            {
                cout << temp << temp;
            }
            else
            {
                cout << temp;
            }
            for (int i = k - 2; i >= 0; i--)
            {
                char a = 97 + i % x;
                cout << a;
            }
            cout << endl;
        }
    }
}