#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int q, n;
    cin >> n >> q;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        p.push_back(temp);
    }
    sort(p.begin(), p.end());
    ll sums_to_end[n];
    sums_to_end[n - 1] = p[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sums_to_end[i] = sums_to_end[i + 1] + p[i];
    }
    for (int query = 0; query < q; query++)
    {
        int x, y;
        cin >> x >> y;
        int start = n - x;
        ll ans;
        if (x == y)
        {
            ans = sums_to_end[start];
        }
        else
        {
            int end = n - x + y;
            ans = sums_to_end[start] - sums_to_end[end];
        }
        cout << ans << endl;
    }
}