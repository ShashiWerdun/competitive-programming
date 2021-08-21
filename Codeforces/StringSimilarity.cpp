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
        char x;
        string s;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            cin >> x;
            if (i % 2 == 0)
            {
                s.push_back(x);
            }
        }
        cout << s << endl;
    }
}