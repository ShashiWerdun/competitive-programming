#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        string b, a;
        cin >> a;
        if (a.size() == 2)
        {
            b = a;
        }
        else
        {
            for (int i = 0; i < a.size(); i += 2)
            {
                b.push_back(a[i]);
            }
            b.push_back(a[a.size() - 1]);
        }
        cout << b << endl;
    }
    return 0;
}