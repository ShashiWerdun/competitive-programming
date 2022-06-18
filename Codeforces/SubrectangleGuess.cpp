#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {

        int n, m;
        cin >> n >> m;
        int in[n][m], maxx = INT_MIN, maxi, maxj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> in[i][j];
                if (in[i][j] > maxx)
                {
                    maxx = in[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
        }
        cout << max(maxi + 1, n - maxi) * max(maxj + 1, m - maxj) << endl;
    }
}