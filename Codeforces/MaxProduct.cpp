//INCOMPLETE

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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll temp[3];
        temp[0] = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        temp[1] = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
        temp[2] = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        ll max = pow(-3000, 5);
        for (int i = 0; i < 3; i++)
        {
            if (temp[i] > max)
            {
                max = temp[i];
            }
        }
        cout << max << endl;
    }
}
