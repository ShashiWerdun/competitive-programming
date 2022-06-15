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
        string ans;
        for (int i = 0; i < n; i += 2)
        {
            if (s.substr(i, 2) == "00")
            {
                ans.append("A");
            }
            else if (s.substr(i, 2) == "01")
            {
                ans.append("T");
            }
            else if (s.substr(i, 2) == "10")
            {
                ans.append("C");
            }
            else if (s.substr(i, 2) == "11")
            {
                ans.append("G");
            }
        }
        cout << ans << endl;
    }
}