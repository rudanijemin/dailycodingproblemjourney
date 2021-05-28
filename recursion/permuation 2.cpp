//print all possible permutation of a string

#include<iostream>
using namespace std;

void permute(string s,int l,int r){
	if(l==r){
		cout<<s<<endl;
		return ;
	}
	for(int i=l;i<=r;i++){
		s=swap(s,l,i);
		permute(s,l+1,r);
		n=swap(s,l,r);
	}
}
