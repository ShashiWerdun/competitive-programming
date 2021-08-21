#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], base, max, num = 0, count = 0;
    bool stat = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    base = a[n - 1];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b, b + m);
    max = b[0];
    while (num <= max)
    {
        num += base;
        for (int i = 0; i < n; i++)
        {
            if (num % a[i] != 0)
            {
                stat = false;
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] % num != 0)
            {
                stat = false;
                break;
            }
        }
        if (stat == true)
        {
            count++;
        }
        stat = true;
    }
    cout << count << endl;
}