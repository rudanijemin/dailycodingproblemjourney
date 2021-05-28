//generate sub string with ASCII number    A==65   B=66

#include <iostream>
using namespace std;
 
void subseq(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return ;
	}
	char ch=s[0];
	int code=ch;
	string ros=s.substr(1);
	
	subseq(ros,ans);
	subseq(ros,ans+ch);
	subseq(ros,ans+ code);
}

int main()
{
	subseq("ab","");
}
