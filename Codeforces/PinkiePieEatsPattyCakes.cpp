#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	uint8_t t;
	cin>>t;
	for(int cases=0;cases<t;cases++)
	{
		int n,x;
		cin>>n;
		int a[n+1]={0},b[n+1]={0},ans = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(a[x]==0)
			{
				a[x] = i;
			}
			else if(b[x] == 0)
			{
				b[x] = i-a[x];
				a[x] = i;
			}
			else if(i-a[x]<b[x])
			{
				b[x] = i-a[x];
				a[x] = i;
			}
		}
		sort(b, b+n+1);
		cout<<b[n]<<endl;
	}
}
