#include<iostream>
using namespace std;

bool ispower2(int n)
{
	return (n&&!(n&n-1));
}
int main()
{
	cout<<ispower2(64)<<endl;
}
