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
        int n, no_answer = -1;
        cin >> n;
        vector<int> s, answer;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s.push_back(temp);
        }
        vector<int> s_copy = s;
        int n_unique = distance(s_copy.begin(), unique(s_copy.begin(), s_copy.end()));
        if (n_unique >= n / 2)
        {
            cout << no_answer << endl;
        }
        else
        {
            int ptr = 0, start = 0;
            while (ptr < n)
            {
                if (s[ptr] == s[ptr + 1])
                {
                    cout << ptr + 2 << " ";
                }
                else
                {
                    cout << start + 1 << " ";
                    start = ptr + 1;
                }
                ptr++;
            }
            cout << endl;
        }
    }
}