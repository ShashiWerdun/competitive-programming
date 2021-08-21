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
        int count = 0;
        string s;
        cin >> s;
        // cout << s.length() << endl;
        if (s.length() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if (s.length() == 2)
        {
            if (s[0] == s[1])
                cout << 1 << endl;
            else
            {
                cout << 0 << endl;
            }
            continue;
        }
        for (int i = 0; i < s.length() - 2; i++)
        {
            char temp[3];
            // cout << "hello" << endl;
            s.copy(temp, 3, i);
            // cout << temp << endl;
            if (temp[0] == temp[1] && temp[1] == temp[2])
            {
                count += 2;
                // cout << "done" << endl;
                i += 2;
            }
            else if (temp[0] == temp[1] || temp[2] == temp[1] || temp[2] == temp[0])
            {
                i += 2;
                count++;
            }
        }
        cout << count << endl;
    }
}