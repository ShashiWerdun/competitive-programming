#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        string s;
        cin >> s;
        int temp = 0;
        vector<int> a;
        if (s[0] == '1')
        {
            temp++;
        }
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                temp++;
            }
            else if (s[i] == '0' && temp)
            {
                a.push_back(temp);
                temp = 0;
            }
        }
        if (temp)
        {
            a.push_back(temp);
        }
        // cout << a.size() << endl;
        int n = a.size();
        int ans = 0;
        sort(a.begin(), a.end());
        int i = 0;
        while (i < n - n / 2)
        {
            ans += a[n - 1 - i * 2];
            i++;
        }
        cout << ans << endl;
    }
}