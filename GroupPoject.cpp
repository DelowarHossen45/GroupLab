#include<bits/stdc++.h>
using namespace std;

int power(int base, int power){
	return pow(base, power);
}
int sumfunction(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int play(){
	cout<<"Khela hope\n";
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
	sum=sumfunction(5,10);
	cout<<sum;
	printf("%d\n", p);
	return 0;

}
