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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        int ptr1 = 0, ptr2 = n - 1;
        int ans = 0;
        while (ptr1 < ptr2)
        {
            if ((a[ptr2] + a[ptr2 - 1]) / k > (a[ptr2] + a[ptr1]) / k)
            {
                ans += (a[ptr2] + a[ptr2 - 1]) / k;
                ptr2 -= 2;
                continue;
            }
            int temp = k - a[ptr2];
            while (a[ptr1] < temp && ptr1 < ptr2)
            {
                ptr1++;
            }
            if (ptr1 >= ptr2)
            {
                break;
            }
            ans += (a[ptr1] + a[ptr2]) / k;
            ptr1++;
            ptr2--;
        }
        cout << ans << endl;
    }
}