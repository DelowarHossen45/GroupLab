#include<bits/stdc++.h>
using namespace std;

int power(int base, int power){
	return pow(base, power);
}

int main()
{
	int i,j,n,sum=1, p;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	cout<<"Final value of Factorial : ";
	cout<<sum;
	p=power(2,10);
	printf("%d\n", p);
	return 0;
}
