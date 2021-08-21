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
        for (int i = s.size() - 1; i >= 1; i--)
        {
            if (s[i] == '0' && s[i - 1] == '0' && i > s.find('1'))
            {
                s.erase(s.begin() + i);
            }
            else if (s[i] == '0' && s[i - 1] == '1')
            {
                s.erase(s.begin() + i - 1);
            }
        }
        cout << s << endl;
    }
    return 0;
}