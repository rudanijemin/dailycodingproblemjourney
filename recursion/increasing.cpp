#include <iostream>
using namespace std;

void inc(int n)
{
	if(n==0)
	return ;
	
	inc(n-1);       //first call and after print
	cout<<n<<endl;
}

int main()
{
	int n;
	cin>>n;
	
	inc(n);
}
