#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "FastestFinger" << endl;
        }
        else if (n % 2 == 1)
        {
            cout << "Ashishgup" << endl;
        }
        else if (n % 2 == 0)
        {
            if (n == 2)
            {
                cout << "Ashishgup" << endl;
            }
            else if (n == 4 || n == 8)
            {
                cout << "FastestFinger" << endl;
            }
            else if (n % 4 == 0)
            {
                cout << "Ashishgup" << endl;
            }
            else
            {
                cout << "FastestFinger" << endl;
            }
        }
    }
}