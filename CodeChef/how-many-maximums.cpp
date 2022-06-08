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
        string s;
        cin >> s;
        int count = 0;
        if (s[0] == '1')
        {
            count++;
        }
        if (s[n - 2] == '0')
        {
            count++;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i - 1] == '0')
            {
                count++;
            }
        }
        if (n == 2)
        {
            count = 1;
        }
        cout << count << endl;
    }
}