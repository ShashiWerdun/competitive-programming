#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        cin >> n;
        int a[n], b[n], c[n], d[n], j = 0, k = 0, result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i])
            {
                c[j] = a[i]; //array having all elements of type 1
                j++;
            }
            else
            {
                d[k] = a[i]; // array having all elements of type 0
                k++;
            }
        }
        // cout << is_sorted(c, c + j) << endl;
        // cout << is_sorted(d, d + k) << endl;
        // cout << endl;
        if (!(is_sorted(c, c + j)) && (k == 0))
        {
            cout << "no" << endl;
        }
        else if (!(is_sorted(d, d + k)) && (j == 0))
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}