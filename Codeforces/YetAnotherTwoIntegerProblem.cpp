#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int a, b, temp;
        cin >> a >> b;
        temp = abs(a - b);
        if (temp % 10)
        {
            temp /= 10;
            cout << temp + 1 << endl;
        }
        else
        {
            temp /= 10;
            cout << temp << endl;
        }
    }
}