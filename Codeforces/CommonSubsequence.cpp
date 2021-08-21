#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        bool found = false;
        int n, m, x;
        cin >> n >> m;
        int c[1001] = {0};
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (!c[x])
            {
                a.push_back(x);
                c[x] = 1;
            }
        }
        sort(a.begin(), a.end());
        n = a.size();
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (find(a.begin(), a.end(), x) != a.end() && found == false)
            {
                cout << "YES" << endl;
                cout << "1 " << x << endl;
                found = true;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
}