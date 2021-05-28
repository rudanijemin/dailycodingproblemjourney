// reverse string 

#include <iostream>
using namespace std;

void reverse(string s)
{
	if(s.length()==0){   // base case
		return ;
	}
	
	string ros=s.substr(1); //substr means 1 ke bad ka sabhi print hoga
	reverse(ros);
	cout<<s[0];
}

int main()
{
	reverse("jemin");
}
