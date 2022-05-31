#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, count_odd = 0, count_even = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            if (temp % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }
        cout << min(count_odd, count_even) << endl;
    }
    return 0;
}