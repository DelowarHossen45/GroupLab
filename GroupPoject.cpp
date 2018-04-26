#include<bits/stdc++.h>
using namespace std;
//sum function
int sumfunction(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
<<<<<<< HEAD
	int i,j,n,sum=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	cout<<"Final value of Factorial : ";
	cout<<sum;
	
=======
    int x,y,z;
    cin>>x>>y;

    z=sumfunction(x,y);
    cout<<"Sum :"<<z<<endl;
>>>>>>> 90fe80e5f8f3e41b6f831d2f478d38cf4284ccef
	return 0;
}
