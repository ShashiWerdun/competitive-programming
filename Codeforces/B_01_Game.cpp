#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int c0 = 0, c1 = 0, turns;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
            else if (s[i] == '0')
            {
                c0++;
            }
        }
        turns = min(c0, c1);
        if (turns % 2)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
}