#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a[6][6], ans = INT8_MIN;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            ans = max(ans, a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1]);
        }
    }
    cout << ans << endl;
}