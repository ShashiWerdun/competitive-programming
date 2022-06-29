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
        int arr[2 * n];
        int count[2] = {0, 0};
        vector<int> pof2;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            count[arr[i] % 2]++;
            if (arr[i] % 2 == 0)
            {
                int temp = 0;
                while (arr[i] % 2 == 0)
                {
                    arr[i] /= 2;
                    temp++;
                }
                pof2.push_back(temp);
            }
        }
        sort(pof2.begin(), pof2.end());
        int ans = 0;
        if (count[1] >= n)
        {
            ans = count[1] - n;
        }
        else
        {
            for (int i = 0; i < count[0] - n; i++)
            {
                ans += pof2[i];
            }
        }
        cout << ans << endl;
    }
}