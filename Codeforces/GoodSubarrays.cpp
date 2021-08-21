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
        int n, temp_size = 0, temp_sum = 0, ans = 0;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back(n % 10);
            n /= 10;
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            temp_size++;
            temp_sum += a[i];
            if (temp_sum == temp_size)
            {
                ans++;
            }
            else if (temp_sum > temp_size)
            {
                while (temp_sum > temp_size)
                {
                    temp_sum -= a[j];
                    temp_size--;
                    j++;
                }
            }
        }
    }
}