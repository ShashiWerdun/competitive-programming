#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int a, b, ans_p2;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0 0" << endl;
            continue;
        }
        else if (a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        int diff = a - b;
        int ans_p1;
        if (diff < b)
        {
            ans_p1 = diff;
            ans_p2 = (a % diff) < (diff - a % diff) ? (a % diff) : (diff - a % diff);
        }
        else if (diff == b)
        {
            ans_p1 = b;
            ans_p2 = 0;
        }
        else if (diff > b)
        {
            ans_p1 = diff;
            ans_p2 = diff - b;
        }
        cout << ans_p1 << " " << ans_p2 << endl;
    }
}