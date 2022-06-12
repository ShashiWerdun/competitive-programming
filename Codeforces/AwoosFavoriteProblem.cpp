// INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x;
    cin >> x;
    for (int cases = 0; cases < x; cases++)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        cin >> t;
        int start = 0, end = n - 1;
        string ans = "yes", move_start = "yes", move_end = "yes";
        while (start < end)
        {
            move_end = "yes", move_start = "yes";
            if (s[start] == t[start])
            {
                start++;
            }
            else
            {
                if (t[start] == 'a')
                {
                    ans = "no";
                    break;
                }
                else if (t[start] == 'b')
                {
                    int temp = start;
                    while (s[temp] != 'b' && temp < end)
                    {
                        if (s[temp] == 'a')
                        {
                            temp++;
                        }
                        else
                        {
                            move_start = "no";
                            break;
                        }
                    }
                }
                else if (t[start] == 'c')
                {
                    int temp = start;
                    while (s[temp] != 'c' && temp < end)
                    {
                        if (s[temp] == 'b')
                        {
                            temp++;
                        }
                        else
                        {
                            move_start = "no";
                            break;
                        }
                    }
                }
            }

            if (t[end] == s[end])
            {
                end--;
            }
            else
            {
                if (t[end] == 'c')
                {
                    ans = "no";
                    break;
                }
                else if (t[end] == 'b')
                {
                    int temp = end;
                    while (s[temp] != 'b' && temp > start)
                    {
                        if (s[temp] == 'c')
                        {
                            temp--;
                        }
                        else
                        {
                            move_end = "no";
                            break;
                        }
                    }
                }
                else if (t[end] == 'a')
                {
                    int temp = end;
                    while (s[temp] != 'a' && temp > start)
                    {
                        if (s[temp] == 'b')
                        {
                            temp--;
                        }
                        else
                        {
                            move_end = "no";
                            break;
                        }
                    }
                }
            }

            if (move_start == "no" && move_end == "no")
            {
                ans = "no";
            }
        }
        cout << ans << endl;
    }
}