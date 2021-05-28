#include <iostream>
using namespace std;

void replacepi(string s)
{
	if(s.length()==0)   //base case
	return ;
	
	if(s[0]=='p'&&s[1]=='i'){
		cout<<"3.14";
		replacepi(s.substr(2)); //substr means 2 ke bad ka sabhi print hoga
	}
	else
	{
		cout<<s[0];
		replacepi(s.substr(1));
	}
}

int main()
{
	replacepi("pipppiiipipiiipiiiipi");
}
