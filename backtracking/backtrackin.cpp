#include <iostream>
using namespace std;

bool isSafe(int **arr , int x,int y,int n){     //arr** dianamic arr	
	if(x<n && y<n && arr[x][y]==1){
		return true;
	}
	return false;
}

bool ratinmaze(int** arr,int x,int y,int n,int** solArr){
	if(x==n-1 && y==n-1){
		solArr[x][y]=1;      //base case
		return true;
	}
	if(isSafe(arr,x,y,n)){
		solArr[x][y]=1;
		if(ratinmaze(arr,x+1,y,n,solArr)){
			return true;
		}
		if(ratinmaze(arr,x,y+1,n,solArr)){
			return true;
		}
		solArr[x][y]=0;   //backtracking
		return false;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	
	int** arr=new int*[n];
	for(int i=0;i<n;i++){                //dainamic arr
		arr[i]=new int[n];
	}
	
	for(int i=0;i<n;i++){                        //input 
		for(int j=0;j<n;j++){
			cin>>arr[i][j]; 
		}
	}
	
	int** solArr=new int*[n];
	for(int i=0;i<n;i++){    //dainamic arr
		solArr[i]=new int[n];
		for(int j=0;j<n;j++){      //solArr initialization 
			solArr[i][j]=0;
		}
	}
	
	if(ratinmaze(arr,0,0,n,solArr)){
		for(int i=0;i<n;i++){                        //input 
		for(int j=0;j<n;j++){
			cout<<solArr[i][j]<<"   ";
		}cout<<endl;
	}
		
	}
	return 0;
}
	
	
	
	
	
	
	               
		
	
























