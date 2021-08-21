#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	for(int cases=0;cases<t;cases++)
	{
		int i, n, b, x, cost=0;
		cin>>n>>b;
		vector<int> a;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		i=0;
		while(cost<=b)
		{
		    cost+=a[i];
		    i++;
		}
		cout<<"Case #"<<cases+1<<": "<<i-1<<endl;
	}
}
