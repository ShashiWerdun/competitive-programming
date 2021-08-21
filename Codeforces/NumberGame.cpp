#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll perfecteves[28];

bool perfectEve(ll a)
{
    for (int i = 0; i < 28; i++)
    {
        if (a == perfecteves[i])
        {
            return true;
        }
    }
    return false;
}

bool oneOddDivisor(ll a)
{
    int count = 0;
    a /= 2;
    for (int i = 3; i * i <= a; i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 2; i < 30; i++)
    {
        perfecteves[i - 2] = pow(2, i);
    }
    for (int cases = 0; cases < t; cases++)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "FastestFinger" << endl;
        }
        else if (n == 2)
        {
            cout << "Ashishgup" << endl;
        }
        else if (n % 2 == 1)
        {
            cout << "Ashishgup" << endl;
        }
        else if (perfectEve(n) && n != 2)
        {
            cout << "FastestFinger" << endl;
        }
        else if (oneOddDivisor(n) && n % 4 == 2 && n % 2 == 0)
        {
            cout << "FastestFinger" << endl;
        }
        else
        {
            cout << "Ashishgup" << endl;
        }
    }
}

// cout << "FastestFinger" << endl;
// cout << "Ashishgup" << endl;