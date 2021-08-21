#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, tn = 0, temp;
        cin >> n;
        string s;
        int a[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            temp = s.size();
            tn += temp;
            for (int j = 0; j < temp; j++)
            {
                int temp1 = s[j] - 97;
                a[temp1]++;
            }
        }
        if (tn % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        bool no = false;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % n != 0)
            {
                no = true;
                cout << "NO" << endl;
                break;
            }
        }
        if (no == false)
        {
            cout << "YES" << endl;
        }
    }
}