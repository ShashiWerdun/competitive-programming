#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, oddcount = 0, evencount = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != i % 2)
            {
                if (i % 2)
                    evencount++;
                else
                    oddcount++;
            }
        }
        if (oddcount == evencount)
        {
            cout << oddcount << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}