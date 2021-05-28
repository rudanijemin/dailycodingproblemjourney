//find the first and last occurence of a number in an array

#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
	if(i==n)
	return -1;
	
	
	if(arr[i]==key)
	return i;
	
	return firstocc(arr,n,i+1 ,key);
}

int lastocc(int arr[],int n,int i,int key)
{
	if(i==n)
	return -1;
	
	int restarry=lastocc(arr,n,i+1,key);
	if(restarry!=-1){
		return restarry;
	}
	if(arr[i]==key){
		return i;
	}
	return -1;
}
int main()
{
	int arr[]={4,5,6,3,8,6};
	cout<<firstocc(arr,9,0,6)<<endl;
	cout<<lastocc(arr,9,0,6)<<endl;
	return 0;
}
