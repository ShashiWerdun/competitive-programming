//INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int tot = 0, rand = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            if (c == '(')
            {
                tot++;
            }
            else if (c == ')')
            {
                tot--;
            }
            else if (c == '?')
            {
                rand++;
            }

            if (tot < 0)
            {
                if (rand == 0)
                {
                    break;
                }
                else if (rand > 0)
                {
                    rand--;
                    tot = 0;
                }
            }
        }
        if (tot == 0 && (rand == 0 || rand % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}