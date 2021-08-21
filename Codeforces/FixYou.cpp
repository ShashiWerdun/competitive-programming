#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n, m, answer = 0;
        char x;
        cin>>n>>m;
        for (int i=1;i<n;i++)
        {
            for (int j=1;j<m;j++)
            {
                cin>>x;
            }
            cin>>x;
            if (x != 'D')
            {
                answer++;
            }
        }
        for (int i=1;i<m;i++)
        {
            cin>>x;
            if (x=='D')
            {
                answer++;
            }
        }
        cin>>x;
        cout<<answer<<endl;
    }
}