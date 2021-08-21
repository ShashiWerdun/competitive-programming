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
        cout << 9;
        int temp = 8;
        while (n-- != 1)
        {
            cout << (temp++) % 10;
        }
        cout << endl;
    }
}