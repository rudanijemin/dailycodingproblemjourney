#include<iostream>
using namespace std;

int power(int n,int p)
{
	if(p==0)
	return 1;
	
	int prvpower=power(n,p-1);
	return n*prvpower;
}

int main()
{
	int n,p;
	cin>>n>>p;
	cout<<power(n,p)<<endl;
}
