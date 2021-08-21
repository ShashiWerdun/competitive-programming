//INCOMPLETE

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cin >> n;
        cout << 1 << " " << 1 << endl;
        cout << -n << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        return 0;
    }
    ll a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % n < 0)
        {
            b[i] = (n - 1) * (n + a[i] % n);
        }
        else
        {
            b[i] = (n - 1) * (a[i] % n);
        }
    }
    cout << "1 " << n - 1 << endl;
    for (int i = 0; i < n - 1; i++)
    {
        a[i] += b[i];
        cout << b[i] << " ";
    }
    cout << endl;
    cout << n << " " << n << endl;
    cout << -a[n - 1] << endl;
    cout << 1 << " " << n << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << -a[i] << " ";
    }
    cout << 0 << endl;
}