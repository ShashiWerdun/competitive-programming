//INCOMPLETE

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, temp = 0, count = 0;
        char x, prevX;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (prevX == ')' && x == '(' && i != 0 && temp > 0)
            {
                count += (i + 1 - temp) / 2;
                temp += (i + 1 - temp) / 2;
            }
            if (x == '(')
            {
                temp++;
            }
            else
            {
                temp--;
            }
            if (temp < 0)
            {
                count++;
                temp++;
            }
            // cout << count << endl;
            prevX = x;
        }
        cout << count << endl;
        // cout << endl;
    }
}