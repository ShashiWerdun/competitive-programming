// INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, k;
        cin >> n >> k;
        vector<char> s;
        int first = -1, count = 0, last = -1;
        for (int i = 0; i < n; i++)
        {
            char temp;
            cin >> temp;
            if (temp == '1')
            {
                count++;
                if (first == -1)
                {
                    first = i;
                }
                else
                {
                    last = i;
                }
            }
        }
        // cout << first << " " << count << " " << last << endl;
        long long int answer = 0;
        if (count == 0)
        {
            cout << "0" << endl;
        }
        else if (count == 1)
        {
            if (n - 1 - last <= k)
            {
                cout << 1 << endl;
            }
            else if (first <= k)
            {
                cout << 10 << endl;
            }
            else
            {
                cout << 11 << endl;
            }
        }
        else
        {
            if ((n - 1 - last) + first <= k)
            {
                cout << 10 + 1 + (count - 2) * 11 << endl;
            }
            else if (n - 1 - last <= k)
            {
                cout << (count - 1) * 11 + 1 << endl;
            }
            else if (first <= k)
            {
                cout << (count - 1) * 11 + 10 << endl;
            }
            else
            {
                cout << count * 11 << endl;
            }
        }
    }
}