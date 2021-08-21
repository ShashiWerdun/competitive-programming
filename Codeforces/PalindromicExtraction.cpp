#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	for(int cases=0;cases<t;cases++)
	{
		string w;
		cin>>w;
		int n=w.length();
		if(n==1)
		{
			cout<<-1<<endl;
			continue;
		}
		if(n==2)
		{
			cout<<1<<" "<<1<<endl;
			continue;
		}
		cout<<2<<" "<<n-1<<endl;
	}
}

