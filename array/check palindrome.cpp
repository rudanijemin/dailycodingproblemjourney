#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	char arr[n+1];
	cin>>arr;
	
	bool check=false;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			check=true;
			break;
		}
	}
	if(check==true)
	        cout<<"word is palindrome"<<endl;
	else
	        cout<<"word is not palindrome"<<endl;
}
