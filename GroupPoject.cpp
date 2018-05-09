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
void print(){
	cout<<"My name is Mahady Hasan Rony ";
}
int fibonacci(int n){
		if(n==0 || n==1){
		return n;
	}
	else{
		return fibonacci(n-2)+fibonacci(n-1);
		
	}
	
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
	cout<<"::Inter a integer::"<<endl;
	cin>>n;

	cout<<"Fibonacci of "<<n<<"th is:"<<fibonacci(n)<<endl;
	return 0;

}
