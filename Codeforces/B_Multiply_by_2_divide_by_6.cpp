#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        bool fail = false;
        ll n, temp;
        int count2 = 0, count3 = 0;
        cin >> n;
        temp = n;
        while (temp % 6 == 0)
        {
            temp /= 6;
            count2++;
            count3++;
        }
        if (temp == 1)
        {
            cout << count2 << endl;
            continue;
        }
        else if (temp % 2 == 0 || temp % 3 != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        while (temp % 3 == 0)
        {
            temp /= 3;
            count3++;
        }
        if (temp != 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << 2 * count3 - count2 << endl;
        }
    }
}