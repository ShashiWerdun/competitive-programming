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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int power = 0, temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= pow(2, power + 1))
            {
                count += temp * (temp - 1) / 2;
                power++;
                temp = 1;
            }
            else
            {
                temp++;
            }
        }
        count += temp * (temp - 1) / 2;
        cout << count << endl;
    }
}