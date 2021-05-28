#include<iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
	return 0;
	
	int prvsum=sum(n-1);
	return n+prvsum;
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
}
