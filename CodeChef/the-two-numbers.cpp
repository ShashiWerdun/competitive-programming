// INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int get_gcd(int x, int y)
{
    int r = 0, a, b;
    a = (x > y) ? x : y;
    b = (x < y) ? x : y;

    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        cin >> n;
        int a, b;
        if (n % 2 == 0)
        {
            a = n / 2 - 1;
        }
        else
        {
            a = n / 2;
        }
        b = n / 2 + 1;
        int ans = 0;
        while (a > 0)
        {
            int gcd = get_gcd(a, b);
            int lcm = a * b / gcd;
            int temp_ans = lcm - gcd;
            if (temp_ans > ans)
            {
                ans = temp_ans;
            }
            a--;
            b++;
        }
        cout << ans << endl;
    }
}