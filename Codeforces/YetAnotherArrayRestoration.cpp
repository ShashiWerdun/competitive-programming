#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int k = n - 1;
        while ((y - x) % k)
        {
            k--;
        }
        int diff = (y - x) / k;
        if (k < 0)
        {
            diff = y - x;
        }
        int temp = y;
        int i = 1;
        while (n-- && temp > 0)
        {
            cout << temp << " ";
            temp = y - i * diff;
            i++;
        }
        n++;
        if (n < 0)
        {
            n = 0;
        }
        i = 1;
        temp = y + diff;
        while (n-- && temp > 0)
        {
            cout << temp << " ";
            i++;
            temp = y + i * diff;
        }
        cout << endl;
    }
}