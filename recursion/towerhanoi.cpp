/* tower of hanoi
  a to c me leke janeka he                             
  1.  1 bari me ek block ko utha sakate he
  2.  chote block ke upar bada block nahi */
  
#include <iostream>
using namespace std;

void tower(int n,char src,char dest,char helper)   // n=block  src=a   helper=b  dest=c
{
	if(n==0)      //base case
	return ;
	
	
	tower(n-1,src,helper,dest);      //dest he vo helper ho jayega    //helper he vo dest ho jayega
	cout<<" move from "<<src<<" to "<<dest<<endl;
	tower(n-1,helper,dest,src);
	

}
int main()
{
	tower(4,'a','c','b');
}


