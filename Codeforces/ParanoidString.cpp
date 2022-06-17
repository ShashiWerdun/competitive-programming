#include <bits/stdc++.h>
using namespace std;
#define ll long long

// // TLE on test case 4
// int main()
// {
//     int t;
//     cin >> t;
//     for (int cases = 0; cases < t; cases++)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int dp[n], ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             dp[i] = -1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             dp[i] = int(s[i] == '1');
//             ans++;
//         }
//         // cout << "ans1: " << ans << endl;
//         for (int i = 1; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 if (dp[j - 1] % 2 != s[j] - '0')
//                 {
//                     dp[j] = s[j] - '0';
//                     ans++;
//                 }
//                 else if ((dp[j] % 2 != s[j - i] - '0'))
//                 {
//                     if ((dp[j] < 2))
//                     {
//                         ans++;
//                     }
//                 }
//                 else
//                 {
//                     dp[j] = int(s[j] == '1') + 2;
//                 }
//             }
//             // cout << "intermediate ans:" << ans << endl;
//         }
//         // cout << "the dp matrix:" << endl;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     for (int j = 0; j < n; j++)
//         //     {
//         //         cout << dp[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }
//         // cout << "final ans: " << ans << endl;
//         cout << ans << endl;
//     }
// }

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll count = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                count += i;
            }
        }
        cout << n * (n - 1) / 2 - count + n << endl;
    }
}