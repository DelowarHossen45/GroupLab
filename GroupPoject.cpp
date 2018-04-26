#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,sum=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	cout<<"Final value of Factorial : ";
	cout<<sum;
	return 0;
}
