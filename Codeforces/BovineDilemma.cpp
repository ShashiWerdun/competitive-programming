#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, count = 0;
        cin >> n;
        int a[50], b[50] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[a[j] - a[i]] == 0)
                {
                    b[a[j] - a[i]] = 1;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}