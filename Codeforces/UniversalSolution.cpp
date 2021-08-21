#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int pcount = 0, scount = 0, rcount = 0, maxi;
        string s;
        char x;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'P')
            {
                pcount++;
            }
            else if (s[i] == 'S')
            {
                scount++;
            }
            else
            {
                rcount++;
            }
        }
        maxi = max(scount, max(pcount, rcount));
        if (maxi == scount)
        {
            x = 'R';
        }
        else if (maxi == rcount)
        {
            x = 'P';
        }
        else
        {
            x = 'S';
        }
        for (int i = 0; i < n; i++)
        {
            cout << x;
        }
        cout << endl;
    }
}