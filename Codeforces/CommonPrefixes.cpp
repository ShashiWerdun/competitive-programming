#include<bits/stdc++.h>
using namespace std;
#define ll long long


char gen = 'a', end1 = 'b', end2 = 'c';

int main()
{
	int t;
	cin>>t;
	for(int cases=0;cases<t;cases++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<a[0];i++)
		{
			cout<<gen;
		}
		cout<<end1<<endl;
		for(int i=1;i<n;i++)
		{
			if(a[i] == 0 || a[i] <= a[i-1])
			{
				char temp = end2;
				end2 = end1;
				end1 = temp;
			}
			for(int j=0;j<max(a[i],a[i-1]);j++)
			{
				cout<<gen;
			}
			cout<<end1<<endl;
		}
		if(a[n-1] == 0 || a[n-1] <= a[n-2])
		{
			char temp = end1;
			end1 = end2;
			end2 = temp;
		}
		for(int i=0;i<a[n-1];i++)
		{
			cout<<gen;
		}
		cout<<end1<<endl;
	}
}

void swap(char a, char b)
{
	char temp = a;
	a = b;
	b = temp;
}
