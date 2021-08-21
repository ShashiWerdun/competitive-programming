#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, x, ans;
    cin >> n;
    int a[200001], b[200001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b[(a[x] - i + n) % n]++;
    }
    ans = *max_element(b, b + 200001);
    cout << ans << endl;
    return 0;
}