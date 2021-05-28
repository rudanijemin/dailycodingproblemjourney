/* generate all substring of a string
 substrin=(2*power n) n=char of string*/
 
 #include <iostream>
using namespace std;
 
void subseq(string s,string ans)  //ans = empty("")string
{
	if(s.length()==0){
		cout<<ans<<endl;
		return ;
	}
	
	char ch=s[0];
	string ros=s.substr(1); //ros=rest of the string 
	
	subseq(ros,ans);  //s me ros 
	subseq(ros,ans+ch);  //ek bar char add nahi karenge or dusari bar char add karenege
	
}
int main()
{
	subseq("abc","");
}
