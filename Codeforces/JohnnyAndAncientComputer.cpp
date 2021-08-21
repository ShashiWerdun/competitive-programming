#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll a, b, count = 0, k = 8;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else if (a == 1 || b == 1)
        {
            cout << "-1" << endl;
        }
        else if (a % b != 0 && b % a != 0)
        {
            cout << "-1" << endl;
        }
        else if (a % b == 0)
        {
            while (a != b)
            {
                if (a % 8 == 0)
                {
                    a /= 8;
                    count++;
                }
                else if (a % 4 == 0)
                {
                    a /= 4;
                    count++;
                }
                else if (a % 2 == 0)
                {
                    a /= 2;
                    count++;
                }
                else
                {
                    cout << "-1" << endl;
                    break;
                }
            }
            cout << count << endl;
        }
        else if (b % a == 0)
        {
            while (a != b)
            {
                a *= k;
                if (a > b)
                {
                    a /= k;
                    k /= 2;
                }
                else if (a == b)
                {
                    cout << ++count << endl;
                }
                else if (a < b)
                {
                    count++;
                }
                if (k == 1)
                {
                    cout << "-1" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}