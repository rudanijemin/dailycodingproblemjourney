//move all x to the end of the string

#include <iostream>
using namespace std;
 
string moveallx(string s)
{
	if(s.length()==0)
	return "";
	
	char ch=s[0];
	string ans=moveallx(s.substr(1));
	
	if(ch=='x')
	return ans+ch;    //pele ans print bad me last me x print
	
	return ch+ans;    //pele ch bad me ans
	
}
int main()
{
	cout<<moveallx("acxvfxhbvxyydxyxexdfx")<<endl;
}
