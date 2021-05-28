//print all possible permutation of a string

#include<iostream>
using namespace std;

void permutation(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return ;
	}
	
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		string ros=s.substr(0,i) +s.substr(i+1);//0 se lekar i tak print hoga  //i+1 se string start hogi
	        permutation(ros,ans+ch);	
	}
} 
int main()
{
	permutation("ABC","");
	return 0;
}


