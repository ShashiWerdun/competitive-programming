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
        bool oddOdd = false, eveEve = false;
        char x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            int temp = x - 48;
            if ((i % 2 == 1) && (temp % 2 == 1))
            {
                oddOdd = true;
            }
            else if ((i % 2 == 0) && (temp % 2 == 0))
            {
                eveEve = true;
            }
        }
        if (((n % 2 == 1) && oddOdd) || ((n % 2 == 0) && !eveEve))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}