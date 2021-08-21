#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int a[6],x,count=0;
	for(int i=0;i<6;i++)
	{
		cin>>x;
		if(x==a[0] || x==a[1] || x==a[2])
		{
			continue;
		}
		else
		{
			a[count] = x;
			count++;
		}
	}
	if(count==3)
	{
		cout<<"Bear"<<endl;
	}
	else if(count==2)
	{
		cout<<"Elephant"<<endl;
	}
	else
	{
		cout<<"Alien"<<endl;
	}
}

