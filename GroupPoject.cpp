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
    int x,y,z;
    cin>>x>>y;
    z=sumfunction(x,y);
    cout<<"Sum :"<<z<<endl;
	return 0;
}
