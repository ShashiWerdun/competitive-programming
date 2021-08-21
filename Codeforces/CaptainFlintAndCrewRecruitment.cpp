#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	
	for(int cases=0;cases<t;cases++)
	{
		int n, x, a = 6,b=10,c=14;
		cin>>n;
		
		if(n<31)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			x = n - a - b - c;
			if(x==a||x==b||x==c)
			{
				c = 15;
			}
			x = n - a - b - c;
			cout<<a<<" "<<b<<" "<<c<<" "<<x<<endl;
		}
	}
}

