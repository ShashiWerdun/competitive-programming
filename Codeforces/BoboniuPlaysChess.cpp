#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, x, x0, y, y0;
    cin >> n >> m >> x >> y;
    cout << x << " " << y << endl;
    cout << 1 << " " << y << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!(i == x && j == y) && !(i == 1 && j == y))
                cout << i << " " << j << endl;
        }
        i++;
        for (int j = m; j >= 1 && i <= n; j--)
        {
            if (!(i == x && j == y) && !(i == 1 && j == y))
                cout << i << " " << j << endl;
        }
    }
}