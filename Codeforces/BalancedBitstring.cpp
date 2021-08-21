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
        int n, k;
        cin >> n >> k;
        char x;
        string s;
        int sum = 0, rand = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            s.push_back(x);
            if (x == '1')
            {
                sum++;
            }
            else if (x == '?')
            {
                rand++;
            }
        }
        if (sum > k / 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (sum < k / 2 && k / 2 - sum < rand)
        {
        }
    }
}