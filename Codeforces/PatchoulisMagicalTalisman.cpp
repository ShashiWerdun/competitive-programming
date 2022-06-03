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
        int tokens[n];
        int n_even = 0;
        bool odd_exists = false;
        for (int i = 0; i < n; i++)
        {
            cin >> tokens[i];
            if (tokens[i] % 2 == 0)
            {
                n_even++;
            }
            else
            {
                odd_exists = true;
            }
        }
        if (odd_exists)
        {
            cout << n_even << endl;
        }
        else
        {
            n_even--;
            int temp = 0, divisions = 0;
            for (int i = 0; i < n; i++)
            {
                temp = temp | tokens[i];
            }
            while ((temp & 1) == 0)
            {
                temp = temp >> 1;
                divisions++;
            }
            cout << divisions + n_even << endl;
        }
    }
}