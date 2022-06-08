// INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int count_set_bits(int n)
{
    int shift = 0;
    int count = 0;
    while (shift < 32)
    {
        if (((n >> shift) & 1) == 1)
        {
            count++;
        }
        shift++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, k;
        cin >> n >> k;
        int temp = k;
        vector<int> a;
        while (temp != 1)
        {
            int y = int(log(temp) / log(2));
            int x = pow(2, y);
            a.push_back(y);
            temp -= (x - 1);
            // cout << "inside while" << endl;
        }
        a.push_back(1);
        int m = a.size();
        a[n - 1] = pow(2, a[n - 1]) - 1;
        for (int i = n; i < m; i++)
        {
            a[n - 1] += pow(2, a[i]) - 1;
        }
        a[n - 1] = count_set_bits(a[n - 1]);
        // for (int i = 0; i < m; i++)
        // {
        //     cout << a[i] << " ";
        // }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }
}